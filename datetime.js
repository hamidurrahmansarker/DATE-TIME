function getFormattedDate()
{
    let date = new Date();    
    let hours = date.getHours();
    let am_pm = (hours < 12) ? "AM" : "PM";
    hours = (hours % 12) || 12;
    let minutes = date.getMinutes();
    let seconds = date.getSeconds();
    let day = date.getDate();
    let month = date.getMonth() + 1;
    let year = date.getFullYear();
    let formattedTime = `Time: ${hours}:${minutes}:${seconds} ${am_pm}`;
    let formattedDate = `Date: ${day}-${month}-${year}`;
    return `Premium Date & Time\n${formattedDate}\n${formattedTime}`;
}