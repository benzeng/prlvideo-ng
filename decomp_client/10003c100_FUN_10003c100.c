
void FUN_10003c100(long param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_var;
  int extraout_var_00;
  QArrayData *local_888;
  QArrayData *local_880;
  QArrayData *local_878;
  undefined4 local_870;
  int local_86c;
  undefined1 local_868 [2104];
  
  uVar5 = FUN_100319c00(*(undefined8 *)(param_1 + 0x20));
  lVar6 = FUN_100328b70(uVar5);
  lVar6 = *(long *)(lVar6 + 0x78);
  pcVar2 = *(code **)(*(long *)(lVar6 + 0x9c0) + 0x70);
  iVar4 = QApplication::desktop();
  QDesktopWidget::screenGeometry(iVar4);
  local_86c = ((1 - param_4) + extraout_var_00) - extraout_var;
  local_870 = param_3;
  cVar3 = (*pcVar2)(lVar6 + 0x9c0);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  if (param_2 != 0x20) {
    if (((*(char *)(param_1 + 0x68) == '\0') ||
        (*(int *)(*(long *)(param_1 + 0x70) + 0xc) == *(int *)(*(long *)(param_1 + 0x70) + 8))) ||
       (*(char *)(param_1 + 0x78) != '\0')) {
      uVar1 = *(undefined1 *)(param_1 + 0x78);
      local_888 = *(QArrayData **)(param_1 + 0x80);
      if (1 < *(int *)local_888 + 1U) {
        LOCK();
        *(int *)local_888 = *(int *)local_888 + 1;
        local_868[0] = *(int *)local_888 != 0;
        UNLOCK();
      }
      FUN_10003b8b0(param_1,uVar1,&local_888,0,*(undefined8 *)(param_1 + 0x60));
      if (*(int *)local_888 == -1) {
        return;
      }
      if (*(int *)local_888 != 0) {
        LOCK();
        *(int *)local_888 = *(int *)local_888 + -1;
        UNLOCK();
        if (*(int *)local_888 != 0) {
          return;
        }
        local_868[0] = 0;
      }
      QArrayData::deallocate(local_888,2,8);
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    local_880 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100090150(param_1,uVar5,0xffffffff,&local_880,0);
    if (*(int *)local_880 != -1) {
      if (*(int *)local_880 != 0) {
        LOCK();
        *(int *)local_880 = *(int *)local_880 + -1;
        local_868[0] = *(int *)local_880 != 0;
        UNLOCK();
        if ((bool)local_868[0]) goto LAB_10003c355;
      }
      QArrayData::deallocate(local_880,2,8);
    }
LAB_10003c355:
    FUN_100099d90(local_868,7,0,0xcd);
    goto LAB_10003c232;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  local_878 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100090150(param_1,uVar5,0,&local_878,4);
  if (*(int *)local_878 != -1) {
    if (*(int *)local_878 != 0) {
      LOCK();
      *(int *)local_878 = *(int *)local_878 + -1;
      local_868[0] = *(int *)local_878 != 0;
      UNLOCK();
      if ((bool)local_868[0]) goto LAB_10003c211;
    }
    QArrayData::deallocate(local_878,2,8);
  }
LAB_10003c211:
  FUN_100099d90(local_868,7,0,0xcd);
LAB_10003c232:
  FUN_1000901c0(param_1,local_868);
  return;
}

