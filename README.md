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



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#license">License</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->

## About The Project

This repository contains laboratory works for TMPS. Please refer to README from uproot folders to see more details about
each work!

### Web-hosting department

This project is about 2 types of people: people who work in IT department and consumers who ask IT depart to host their website.

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

<!-- USAGE EXAMPLES -->

## Usage

For usage, refer to README from a laboratory work you wish to use.

For example:

```sh
cd lab1 
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
