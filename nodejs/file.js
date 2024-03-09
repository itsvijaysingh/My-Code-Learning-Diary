const fs = require('fs');

// Read from file asynchronously
fs.readFile("testFile.txt", "utf-8", (err, data) => {
    if (err) {
        console.log(err); // Log the error
        console.log("File does not exist or could not be read.");
    } else {
        console.log("File exists and content is:", data);
    }
});

// Create file
fs.writeFileSync("testData.txt", "Test Data One!");

// Read the content of the created file
const createdFile = fs.readFileSync("testData.txt", "utf-8");
console.log(createdFile);

fs.appendFileSync("testData.txt","\nAppended Data Line");

fs.createReadStream()
