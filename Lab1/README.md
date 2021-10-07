# Web-hosting department

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