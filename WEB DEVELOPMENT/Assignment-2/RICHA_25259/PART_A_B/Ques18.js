const car={
    brand: "Tesla",
    model: "Model 3",
    year: 2025,
    price: 42000
};
for(let i in car){
    console.log(i,": ",car[i]);
}
car["color"]="Red";
console.log(car.color);
car["price"]=52000;
console.log(car.price);