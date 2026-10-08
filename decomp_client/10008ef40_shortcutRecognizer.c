
/* Function Stack Size: 0x10 bytes */

CMacPrevInputSourceShortcutRecognizerPrivate *
CMacShortcutRecognizerEventsObserver::shortcutRecognizer(ID param_1,SEL param_2)

{
  return *(CMacPrevInputSourceShortcutRecognizerPrivate **)(param_1 + _shortcutRecognizer);
}

