<?php

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////  ADMIN  ////// CHECK USER IS LOGGED IN    /////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
function on_localhost(){
	if ( $_SERVER['HTTP_HOST'] == "localhost" ) {
		return true;
	} else {
		return false;
	}
}

?>