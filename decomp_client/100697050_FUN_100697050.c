
void FUN_100697050(void)

{
  QWidget *pQVar1;
  
  pQVar1 = (QWidget *)QApplication::activeWindow();
  if (pQVar1 == (QWidget *)0x0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != activeWindow","ActionManager/ActionHandler/CAppActionHandler.cpp",0xe0,
                  "onMergeAllWindows");
  }
  MacUtils::mergeAllWindowsAsTabsIntoWindow(pQVar1);
  return;
}

