[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">
<h3 align="center">UTM-TMPS-LABS</h3>

  <p align="center">
    Made with a lot of effort (maybe)
    <br />
    <br />
  </p>
</div>




<!-- ABOUT THE PROJECT -->

## About The Project

### Web-hosting department

#### Lab 1

This project is about 2 types of people: people who work in IT department and consumers who ask IT depart to cloudProvider their website.

**Refer to service layer to see them in details**

Since IT department is one and consumers are a lot, IT depart is created as a _singleton_ instance

IT specialists are very clever people, and they can create not one, not two, but three different types of websites: eshop, landing pages and portfolios.

**Refer to domain/models layer to see them in details**

Also, IT specialists are really lazy, so they created a _factory_ to simply and rapidly create any website

**Refer to infrastructure layer to see them in detail**

Some consumers said they want to create their own website structure and, with such coincidence - all of them want "top-of-the-notch" page with all cool front-end features.
For this case, IT department created a composed website, a builder and a director to create this "nop-of-the-notch" website.

**Refer to infrastructure layer to see them in detail**

Overall, project create N-quantity of consumers and ask each one to _consume_ (since this is what consumers do) a website for IT depart. No multi-threading, cuz it's obsiosly overkill

Project follows domain/infrastructrure/application/service pattern, although this is not recommended way of designing in C++

https://badia-kharroubi.gitbooks.io/microservices-architecture/content/patterns/tactical-patterns/domain-application-infrastructure-services-pattern.html

#### Lab 2

In this version, few more patterns were added.

Firstly, _facade_. Facade was not implicitly written. You see, IT department provides all necessary functionality through a
single method: **deployWebsite**. This method encapsulates builders, factories, compositors and many other, so it is a legit facade.

**Refer to infrastructure layer to see them in details**

Next, _composite_. _Composite_ was declared both implicitly and explicitly. Explicitly it is shown in WebAggregator.h. (I know, it holds just array of objects, but it's still composite)
WebAggregator is a class which provides "history" functionality, allowing IT department to remember all websites they created.
Right now history functionality is not used, but I have some ideas in future where to use it. Implicitly _composite_ is declared in WebSites.
Since each website can now have custom cloud provider - they contain and object of cloud provider.

**Refer to infrastructure/models layer to see them in details**

Lastly, now, instead of just hosts, we have cloud providers. To ensure we can have all possible permutations of providers/website, we use
_bridge_ pattern. Cloud provider is an object of type **Deployment** and now every WebSite holds on instance of this object.

**Refer to models layer to see them in details**

#### Lab 3

For this version we added one single pattern: _visitor_.

_Visitor_ is used to traverse array of elements in **ComposedWeb**. For this pattern I created all necessary classes in 
same header to ensure no dependency loop (yeah, it's kinda messy, but it's better than rearranging whole architecture).
Now instead of raw strings, **ComposedWeb** contains array of **ComposedWebElements** which implement **Element** class. 
**Element** class features **accept** method which is necessary for _visitor_ pattern. The _visitor_ itself is implemented in
**Visitor** interface and **ComposedWebVisitor** class. Then I traverse through elements, I call **accept** method of each element
and pass **ComposedWebVisitor** as element. **ComposedWebVisitor** in this case just prints the element, but it could manipulate it
however we want, because of pointers.

**Refer to models layer to see them in details**

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- GETTING STARTED -->

## Getting Started

This is an example of how you may give instructions on setting up your project locally. To get a local copy up and
running follow these simple example steps.

### Dependencies

* CMake >= 3.16
* GCC > 9.3.0
* C++20 (not lower than 11, requires editing CMakeLists.txt)

### Prerequisites

Clone the repo

  ```sh
  git clone https://github.com/FoxFurry/UTM-TMPS-LABS.git
  ```

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- LICENSE -->

## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>


[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge

[license-url]: https://github.com/FoxFurry/UTM-TMPS-LABS/blob/master/LICENSE

[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555

[linkedin-url]: https://www.linkedin.com/in/arthur-isac-412a6519b/
