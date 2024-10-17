const fruits = ["Orange", "Banana", "Apple", "Mango", "Pears", "Tomato", "Mango"];
const vegetables = ["Gobi", "Soyabean", "Mushroom", "Pumpkin", "Lady's Finger"]
const salad = ["Tomato", "Cucumber", "Radish", "Carrot", "Beetroot"]
let size = fruits.length;
// console.log(size);

// document.getElementById("demo").innerHTML = fruits.toString();
// console.log(fruits.toString());

// console.log(fruits.at(3));
// console.log(fruits.join(" RS "));
// console.log(fruits);
// fruits.pop();
// console.log(fruits);
// fruits.push("Potato");
// shift removes first element in the array
// fruits.shift();
// Unshift add new element at the beginning
// fruits.unshift("Ritik");
// console.log(fruits);
// const allItems = fruits.concat(vegetables, salad)
// console.log(allItems)
// console.log(fruits.copyWithin(2, 0,2));
// console.log(fruits.copyWithin(2, 0));
// console.log(vegetables);

// const myArr = [[1, 2], [3, 4], [5, 6, [1,[4,1,8]]]];
// console.log(myArr.flat(3))

// console.log(myArr.flatMap(???)); nahi pata
// console.log(fruits);
// fruits.splice(2, 0, "Lemon", "Kiwi") // first 2 is for position and second 0 is for how many element to delete
// console.log(fruits.toSpliced(0,3)); // first is inded to delete and second one is no. of elements to be deleted

// console.log(fruits.slice(3))

// JavaScript Array Search
// console.log(fruits.indexOf("Mango"));
// console.log(fruits.lastIndexOf("Mango")); //important
// console.log(fruits.includes("Mango"));

// const numbers = [4, 9, 19, 25, 29];
// const found = numbers.find(number => number > 15);
// console.log(found); // 16

// const foundIndex = numbers.findIndex(number => number > 15);
// console.log(foundIndex); // 2

// const lastFound = numbers.findLast(number => number > 15);
// console.log(lastFound)
// const lastFoundIndex = numbers.findLastIndex(number => number > 15);
// console.log(lastFoundIndex)

const numbers = [4, 9, 19, 25, 29];
console.log(numbers);

numbers.sort();
numbers.reverse();
console.log(numbers);

// toSorted() & toReversed() also work as the same above but we don't have 
// to alter the original array here




