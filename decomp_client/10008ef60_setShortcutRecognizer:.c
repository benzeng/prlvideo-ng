
/* Function Stack Size: 0x18 bytes */

void CMacShortcutRecognizerEventsObserver::setShortcutRecognizer_
               (ID param_1,SEL param_2,CMacPrevInputSourceShortcutRecognizerPrivate *param_3)

{
  *(CMacPrevInputSourceShortcutRecognizerPrivate **)(param_1 + _shortcutRecognizer) = param_3;
  return;
}

