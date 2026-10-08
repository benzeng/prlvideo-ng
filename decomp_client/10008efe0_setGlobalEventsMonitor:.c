
/* Function Stack Size: 0x18 bytes */

void CMacShortcutRecognizerEventsObserver::setGlobalEventsMonitor_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + _globalEventsMonitor) = param_3;
  return;
}

