let serial = 1;

function addStudent() {

    let name = document.getElementById("name").value;
    let pr = Number(document.getElementById("pr").value);
    let th = Number(document.getElementById("th").value);
    let grade = document.getElementById("grade").value;

    let total = pr + th;

    let table = document.getElementById("resultTable");

    table.innerHTML += `
        <tr>
            <td>${serial}</td>
            <td>${name}</td>
            <td>${pr}</td>
            <td>${th}</td>
            <td>${total}</td>
            <td>${grade}</td>
        </tr>
    `;

    serial++;

    // Clear form
    document.getElementById("name").value = "";
    document.getElementById("pr").value = "";
    document.getElementById("th").value = "";
    document.getElementById("grade").value = "";
}