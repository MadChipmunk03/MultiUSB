char webPage[] PROGMEM = R"=====(
<!DOCTYPE html>

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    
    <style>
    *{

    }
    body{
      background: linear-gradient(to top left, #171a22, #39404e);
      color: white;
      height: 100vh;
      margin: 0px;
      font-family: sans-serif;
    }
    h1{
        height: 60px;
        margin: 0px;
    }
    h2{
       margin: 4px 15px;
         
    }
    fieldset {
        width: 80vw;
        background-color: #323232;
        border-color: black;
        margin: 15px;
        margin-top: 30px;
        box-shadow: 5px 5px 4px #171a22;
    }
    header{
      text-align: center;
      background-color: black;
      margin-bottom: 40px;
      padding: 20px;
      padding-bottom:0px;
    }
    legend{
      background-color: black;
    }
    .zkratkaSelect{
        width: 20vw;
        display: inline-block;
        float: right;
    }
    .sectionContent{
      margin:10px;
    }
    
    </style>
</head>

<html lang="cs">

<body>
<header>
<h1>HID USB menu</h1>
</header>

<section class="sectionContent">
<fieldset> 
  <legend><h2>řádek</h2></legend>
  <p>napiš, co se má napsat, a odešli</p>
  
  <form action="/vyber" method="POST">
    <input style="width: 50vw;" type="text" id="InputBoxPrintln" name="InputBoxPrintln">
    <input style="width: 20vw;" value="Napsat" type="submit">
  </form>
</fieldset> 

<! ===================================================SINGLE_KEYSTROKE======================================================>

<fieldset> 
    <legend><h2>Klávesa</h2></legend>
    <p>zvol klávesu ke zmáčknutí</p>
    
    <form action="/vyber" method="POST">
        <select style="width: 50vw;" name="SingleKeystroke" id="SingleKeystroke" onchange="this.form.submit();">
        
          <optgroup label="Písmena">
            <option value="4">A</option>
            <option value="5">B</option>
            <option value="6">C</option>
            <option value="7">D</option>
            <option value="8">E</option>
            <option value="9">F</option>
            <option value="10">G</option> 
            <option value="11">H</option>
            <option value="12">I</option>
            <option value="13">J</option>
            <option value="14">K</option>
            <option value="15">L</option>
            <option value="16">M</option>
            <option value="17">N</option>
            <option value="18">O</option>
            <option value="19">P</option>
            <option value="20">Q</option>
            <option value="21">R</option>
            <option value="22">S</option>
            <option value="23">T</option>
            <option value="24">U</option>
            <option value="25">V</option>
            <option value="26">W</option>
            <option value="27">X</option>
            <option value="29">Y</option>
            <option value="28">Z</option>
          </optgroup>
          
          <optgroup label="Háčky/Čárky">
            <option value="31">ě</option>
            <option value="32">š</option>
            <option value="33">č</option>
            <option value="34">ř</option>
            <option value="35">ž</option>
            <option value="36">ý</option>
            <option value="37">á</option>
            <option value="38">í</option>
            <option value="39">é</option>
          </optgroup>
          
          <optgroup label="Užitečné klávesy">
            <option value="40">ENTER</option>
            <option value="41">ESCAPE</option>
            <option value="42">DELETE</option>
            <option value="43">TAB</option>
            <option value="44">MEZERNÍK</option>
          </optgroup>
          
          <optgroup label="znaky">
            <option value="45">=</option>-
            <option value="47">ú</option>[
            <option value="48">)</option>]
            <option value="51">ů</option>;
            <option value="52">§</option>'
            <option value="54">,</option>,
            <option value="55">.</option>.
            <option value="56">-</option>/
          </optgroup>
          
          <optgroup label="F klávesy">
            <option value="58">F1</option>
            <option value="59">F2</option>
            <option value="60">F3</option>
            <option value="61">F4</option>
            <option value="62">F5</option>
            <option value="63">F6</option>
            <option value="64">F7</option>
            <option value="65">F8</option>
            <option value="66">F9</option>
            <option value="67">F10</option>
            <option value="68">F11</option>
            <option value="69">F12</option>
          </optgroup>
          
          <optgroup label="kdo ví">
            <option value="70">PrintScreen</option>
            <option value="71">Scroll Lock</option>
            <option value="72">Pause</option>
            <option value="73">Insert</option>
            <option value="74">Home</option>
            <option value="75">PageUp</option>
            <option value="76">Delete Forward</option>
            <option value="77">End</option>
            <option value="78">PageDown</option>
          </optgroup>
          
          <optgroup label="šipky">
            <option value="82">Nahoru</option>
            <option value="81">Dolu</option>
            <option value="80">Doleva</option>
            <option value="79">Doprava</option>
          </optgroup>
          
        </select>
      <input style="width: 20vw;" value="Stisknout" type="submit">
    </form>
</fieldset> 

<! ===================================================MULTIPLE_KEYSTROKES======================================================>

      
     
    <form action="/vyber" method="POST">
        <fieldset>
            <legend><h2>Zkratka</h2></legend>
            <p>definuj klávesovou zkratku a odešli</p>

            <div>
            <label style="width: 20vw;" for="MultipleKeystrokes">Keys: </label>
            <select class="zkratkaSelect" name="MultipleKeystrokes1" id="MultipleKeystrokes">
    
              <optgroup label="Výchozí"> 
                <option selected="selected" value="0">NONE</option>
              </optgroup>
            
              <optgroup label="Písmena">
                <option value="4">A</option>
                <option value="5">B</option>
                <option value="6">C</option>
                <option value="7">D</option>
                <option value="8">E</option>
                <option value="9">F</option>
                <option value="10">G</option> 
                <option value="11">H</option>
                <option value="12">I</option>
                <option value="13">J</option>
                <option value="14">K</option>
                <option value="15">L</option>
                <option value="16">M</option>
                <option value="17">N</option>
                <option value="18">O</option>
                <option value="19">P</option>
                <option value="20">Q</option>
                <option value="21">R</option>
                <option value="22">S</option>
                <option value="23">T</option>
                <option value="24">U</option>
                <option value="25">V</option>
                <option value="26">W</option>
                <option value="27">X</option>
                <option value="29">Y</option>
                <option value="28">Z</option>
              </optgroup>
              
              <optgroup label="Háčky/Čárky">
                <option value="31">ě</option>
                <option value="32">š</option>
                <option value="33">č</option>
                <option value="34">ř</option>
                <option value="35">ž</option>
                <option value="36">ý</option>
                <option value="37">á</option>
                <option value="38">í</option>
                <option value="39">é</option>
              </optgroup>
              
              <optgroup label="Užitečné klávesy">
                <option value="40">ENTER</option>
                <option value="41">ESCAPE</option>
                <option value="42">DELETE</option>
                <option value="43">TAB</option>
                <option value="44">MEZERNÍK</option>
              </optgroup>
              
              <optgroup label="znaky">
                <option value="45">=</option>-
                <option value="47">ú</option>[
                <option value="48">)</option>]
                <option value="51">ů</option>;
                <option value="52">§</option>'
                <option value="54">,</option>,
                <option value="55">.</option>.
                <option value="56">-</option>/
              </optgroup>
              
              <optgroup label="F klávesy">
                <option value="58">F1</option>
                <option value="59">F2</option>
                <option value="60">F3</option>
                <option value="61">F4</option>
                <option value="62">F5</option>
                <option value="63">F6</option>
                <option value="64">F7</option>
                <option value="65">F8</option>
                <option value="66">F9</option>
                <option value="67">F10</option>
                <option value="68">F11</option>
                <option value="69">F12</option>
              </optgroup>
              
              <optgroup label="kdo ví">
                <option value="70">PrintScreen</option>
                <option value="71">Scroll Lock</option>
                <option value="72">Pause</option>
                <option value="73">Insert</option>
                <option value="74">Home</option>
                <option value="75">PageUp</option>
                <option value="76">Delete Forward</option>
                <option value="77">End</option>
                <option value="78">PageDown</option>
              </optgroup>
              
              <optgroup label="šipky">
                <option value="82">Nahoru</option>
                <option value="81">Dolu</option>
                <option value="80">Doleva</option>
                <option value="79">Doprava</option>
              </optgroup>
              
            </select>
            
            <select class="zkratkaSelect" name="MultipleKeystrokes2" id="MultipleKeystrokes">
    
              <optgroup label="Výchozí"> 
                <option selected="selected" value="0">NONE</option>
              </optgroup>
            
              <optgroup label="Písmena">
                <option value="4">A</option>
                <option value="5">B</option>
                <option value="6">C</option>
                <option value="7">D</option>
                <option value="8">E</option>
                <option value="9">F</option>
                <option value="10">G</option> 
                <option value="11">H</option>
                <option value="12">I</option>
                <option value="13">J</option>
                <option value="14">K</option>
                <option value="15">L</option>
                <option value="16">M</option>
                <option value="17">N</option>
                <option value="18">O</option>
                <option value="19">P</option>
                <option value="20">Q</option>
                <option value="21">R</option>
                <option value="22">S</option>
                <option value="23">T</option>
                <option value="24">U</option>
                <option value="25">V</option>
                <option value="26">W</option>
                <option value="27">X</option>
                <option value="29">Y</option>
                <option value="28">Z</option>
              </optgroup>
              
              <optgroup label="Háčky/Čárky">
                <option value="31">ě</option>
                <option value="32">š</option>
                <option value="33">č</option>
                <option value="34">ř</option>
                <option value="35">ž</option>
                <option value="36">ý</option>
                <option value="37">á</option>
                <option value="38">í</option>
                <option value="39">é</option>
              </optgroup>
              
              <optgroup label="Užitečné klávesy">
                <option value="40">ENTER</option>
                <option value="41">ESCAPE</option>
                <option value="42">DELETE</option>
                <option value="43">TAB</option>
                <option value="44">MEZERNÍK</option>
              </optgroup>
              
              <optgroup label="znaky">
                <option value="45">=</option>-
                <option value="47">ú</option>[
                <option value="48">)</option>]
                <option value="51">ů</option>;
                <option value="52">§</option>'
                <option value="54">,</option>,
                <option value="55">.</option>.
                <option value="56">-</option>/
              </optgroup>
              
              <optgroup label="F klávesy">
                <option value="58">F1</option>
                <option value="59">F2</option>
                <option value="60">F3</option>
                <option value="61">F4</option>
                <option value="62">F5</option>
                <option value="63">F6</option>
                <option value="64">F7</option>
                <option value="65">F8</option>
                <option value="66">F9</option>
                <option value="67">F10</option>
                <option value="68">F11</option>
                <option value="69">F12</option>
              </optgroup>
              
              <optgroup label="kdo ví">
                <option value="70">PrintScreen</option>
                <option value="71">Scroll Lock</option>
                <option value="72">Pause</option>
                <option value="73">Insert</option>
                <option value="74">Home</option>
                <option value="75">PageUp</option>
                <option value="76">Delete Forward</option>
                <option value="77">End</option>
                <option value="78">PageDown</option>
              </optgroup>
              
              <optgroup label="šipky">
                <option value="82">Nahoru</option>
                <option value="81">Dolu</option>
                <option value="80">Doleva</option>
                <option value="79">Doprava</option>
              </optgroup>
              
            </select>
            
            <select class="zkratkaSelect" name="MultipleKeystrokes3" id="MultipleKeystrokes">
              <optgroup label="Výchozí"> 
                <option selected="selected" value="0">NONE</option>
              </optgroup>
              
              <optgroup label="Písmena"> selected="selected"
                <option value="4">A</option>
                <option value="5">B</option>
                <option value="6">C</option>
                <option value="7">D</option>
                <option value="8">E</option>
                <option value="9">F</option>
                <option value="10">G</option> 
                <option value="11">H</option>
                <option value="12">I</option>
                <option value="13">J</option>
                <option value="14">K</option>
                <option value="15">L</option>
                <option value="16">M</option>
                <option value="17">N</option>
                <option value="18">O</option>
                <option value="19">P</option>
                <option value="20">Q</option>
                <option value="21">R</option>
                <option value="22">S</option>
                <option value="23">T</option>
                <option value="24">U</option>
                <option value="25">V</option>
                <option value="26">W</option>
                <option value="27">X</option>
                <option value="29">Y</option>
                <option value="28">Z</option>
              </optgroup>
              
              <optgroup label="Háčky/Čárky">
                <option value="31">ě</option>
                <option value="32">š</option>
                <option value="33">č</option>
                <option value="34">ř</option>
                <option value="35">ž</option>
                <option value="36">ý</option>
                <option value="37">á</option>
                <option value="38">í</option>
                <option value="39">é</option>
              </optgroup>
              
              <optgroup label="Užitečné klávesy">
                <option value="40">ENTER</option>
                <option value="41">ESCAPE</option>
                <option value="42">DELETE</option>
                <option value="43">TAB</option>
                <option value="44">MEZERNÍK</option>
              </optgroup>
              
              <optgroup label="znaky">
                <option value="45">=</option>-
                <option value="47">ú</option>[
                <option value="48">)</option>]
                <option value="51">ů</option>;
                <option value="52">§</option>'
                <option value="54">,</option>,
                <option value="55">.</option>.
                <option value="56">-</option>/
              </optgroup>
              
              <optgroup label="F klávesy">
                <option value="58">F1</option>
                <option value="59">F2</option>
                <option value="60">F3</option>
                <option value="61">F4</option>
                <option value="62">F5</option>
                <option value="63">F6</option>
                <option value="64">F7</option>
                <option value="65">F8</option>
                <option value="66">F9</option>
                <option value="67">F10</option>
                <option value="68">F11</option>
                <option value="69">F12</option>
              </optgroup>
              
              <optgroup label="kdo ví">
                <option value="70">PrintScreen</option>
                <option value="71">Scroll Lock</option>
                <option value="72">Pause</option>
                <option value="73">Insert</option>
                <option value="74">Home</option>
                <option value="75">PageUp</option>
                <option value="76">Delete Forward</option>
                <option value="77">End</option>
                <option value="78">PageDown</option>
              </optgroup>
              
              <optgroup label="šipky">
                <option value="82">Nahoru</option>
                <option value="81">Dolu</option>
                <option value="80">Doleva</option>
                <option value="79">Doprava</option>
              </optgroup>
              
            </select>
            </div>
            <br>
            <div>
            <label style="width: 20vw;" for="ModKeys">MODs: </label>
          
            <select class="zkratkaSelect" name="ModKeys1" id="ModKeys">
                <option selected="selected" value="8">NONE</option>
                <option value="5">SHIFT</option>
                <option value="6">R_ALT</option>
                <option value="2">L_ALT</option>
                <option value="3">GUI</option>
                <option value="0">CTRL</option>
            </select>

            <select class="zkratkaSelect" name="ModKeys2" id="ModKeys">
                <option selected="selected" value="8">NONE</option>
                <option value="5">SHIFT</option>
                <option value="6">R_ALT</option>
                <option value="2">L_ALT</option>
                <option value="3">GUI</option>
                <option value="0">CTRL</option>
            </select>

            <select class="zkratkaSelect" name="ModKeys3" id="ModKeys">
                <option selected="selected" value="8">NONE</option>
                <option value="5">SHIFT</option>
                <option value="6">R_ALT</option>
                <option value="2">L_ALT</option>
                <option value="3">GUI</option>
                <option value="0">CTRL</option>
            </select>
            </div>            
            <br>
          <input style="width: 80vw;" value="Stisknout zkratku" type="submit">
        </form>
    </fieldset>
    
  </section>
</body>
</html>

)=====";

//===================================WEBPAGE FUNCTION==================================

void handleRoot(){
  server.send_P(200,"text/html", webPage);
}

/* Macro button:
      <fieldset> 
      <legend><h2>Makro</h2></legend>
      <p>Spusť zkušební makro. Další makra jsou na stránce s makry.</p>
      
      <form action="/vyber" method="post">
        <input type="submit" name="button" value="test" />
      </form>
    </fieldset> 
    */
 */
