FortreeCity_House2_MapScripts::
	.byte 0

FortreeCity_House2_EventScript_EchoedVoiceGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_ECHOED_VOICE, FortreeCity_House2_EventScript_ExplainEchoedVoice
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 0, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_YourEchoedVoiceHasAwoken, MSGBOX_DEFAULT
	giveitem ITEM_TM_ECHOED_VOICE
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ECHOED_VOICE
	msgbox FortreeCity_House2_Text_ExplainEchoedVoice, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_ExplainEchoedVoice::
	msgbox FortreeCity_House2_Text_ExplainEchoedVoice, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_WrongGuess::
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_Text_CoinInWhichHand:
	.string "Let this old woman see if your hidden\n"
	.string "voice has awoken…\p"
	.string "I hold a coin in my hand.\p"
	.string "Now, tell me, have I palmed it in\n"
	.string "the right hand? Or in the left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand:
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_YourEchoedVoiceHasAwoken:
	.string "Oh! Splendid!\n"
	.string "Your hidden voice has awoken!\p"
	.string "Here, take this and awaken the hidden\n"
	.string "voice of your POKéMON.$"

FortreeCity_House2_Text_ExplainEchoedVoice:
	.string "ECHOED VOICE is a move that powers up\n"
	.string "the more times you use it in a row.$"

FortreeCity_House2_Text_YouGuessedWrong:
	.string "No, too bad.\n"
	.string "You guessed wrong.$"

