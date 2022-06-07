const express = require('express');
const path = require('path');
const ejsMate = require('ejs-mate');
const ejs = require('ejs');

const app = express();

app.engine('ejs', ejsMate)
app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'))

app.use(express.json())
app.use(express.urlencoded({extended:false}))

app.use(express.static(__dirname + "/public"));
app.get('/',(req,res)=>{
    res.render('main');
})
app.get('/weather',(req,res)=>{
    res.render('weather');
})

app.listen(3000, () => {
    console.log('Serving on port 3000')
})
