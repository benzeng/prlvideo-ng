
undefined8 FUN_10023b1c0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  QWidget *pQVar8;
  undefined8 uVar9;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar8 = (QWidget *)FUN_100323e30(uVar9,0);
  uVar5 = WidgetUtils::getScreenNumber(pQVar8);
  if ((pQVar8 == (QWidget *)0x0) || (*(int *)(param_1 + 0x28) == 2)) goto LAB_10023b2fe;
  EnumUtils::enumToString(&local_48,*(int *)(param_1 + 0x28),0);
  QString::toUtf8();
  pQVar3 = local_40;
  lVar2 = *(long *)(local_40 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = FUN_1003798d0(pQVar8);
  FUN_100df99c0("","prl_client_app",0,
                "About to leave native Full Screen. Target view mode %s. New target host display: %d, current: %d, cached: %d"
                ,pQVar3 + lVar2,uVar1,uVar5,uVar6);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023b2ae;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10023b2ae:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023b2de;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10023b2de:
  cVar4 = MacUtils::isWindowInNativeFullScreen(pQVar8);
  if ((cVar4 != '\0') &&
     ((*(int *)(param_1 + 0x28) != 0 || (iVar7 = MacUtils::tabsCountInWindow(pQVar8), iVar7 == 0))))
  {
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_10023b3e0(param_1,pQVar8,1);
    MacUtils::toogleNativeFullScreen(pQVar8);
    return 0;
  }
LAB_10023b2fe:
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar9 = FUN_100323e30(uVar9,0);
  FUN_10023b480(param_1,uVar9,0);
  return 0;
}

