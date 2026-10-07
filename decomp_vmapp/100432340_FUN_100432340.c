
void FUN_100432340(long *param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  QString *this;
  int iVar6;
  void *pvVar7;
  long lVar8;
  int *piVar9;
  QArrayData *local_490;
  int local_488;
  undefined1 local_484;
  QString local_480;
  int local_478;
  undefined1 local_474;
  undefined1 local_470;
  undefined3 uStack_46f;
  uint local_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined1 local_440 [1024];
  undefined4 local_40;
  undefined4 local_38 [2];
  
  lVar8 = *(long *)(*param_3 + 0x10);
  if ((*(int *)(lVar8 + 0x40) != 0x30da5) || (*(int *)(lVar8 + 0x4c) != 1)) {
LAB_100432399:
                    /* WARNING: Could not recover jumptable at 0x0001004323bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x118))((long *)param_1[2],param_2);
    return;
  }
  if (*(uint *)(lVar8 + 0x8c) < 0x18) {
    FUN_1008e3970("","IODesktopServer",0,"Wrong attach to vm package!");
    goto LAB_100432399;
  }
  iVar6 = 0;
  piVar9 = (int *)0x0;
  if (*(long *)(lVar8 + 0x80) != 0) {
    piVar9 = *(int **)(*(long *)(lVar8 + 0x80) + 0x10);
  }
  if (0x1b < *(uint *)(lVar8 + 0x8c)) {
    iVar6 = piVar9[6];
  }
  iVar1 = piVar9[1];
  bVar3 = 0;
  if ((iVar1 != 0) && (bVar3 = 0, *piVar9 == 0)) {
    uVar5 = FUN_1004399e0();
    bVar3 = FUN_10043b210(uVar5,0,iVar1);
  }
  local_470 = 1;
  uStack_46f = 0;
  local_46c = (uint)bVar3;
  FUN_100434990(param_1,param_2,0x30d44,&local_470,8,&DAT_1011ccb98,0);
  local_480.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  iVar4 = *(int *)local_480.field0_0x0;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + 1;
    local_470 = *(int *)local_480.field0_0x0 != 0;
    UNLOCK();
    iVar4 = *(int *)local_480.field0_0x0;
  }
  iVar2 = *piVar9;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + 1;
    local_470 = *(int *)local_480.field0_0x0 != 0;
    UNLOCK();
  }
  local_474 = iVar2 != 0;
  local_478 = iVar6;
  if (*(int *)local_480.field0_0x0 != -1) {
    if (*(int *)local_480.field0_0x0 != 0) {
      LOCK();
      *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + -1;
      local_470 = *(int *)local_480.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_470) goto LAB_1004324c0;
    }
    QArrayData::deallocate((QArrayData *)local_480.field0_0x0,2,8);
  }
LAB_1004324c0:
  QMutex::lock();
  this = (QString *)FUN_100436170(param_1 + 4,param_2);
  QString::operator=(this,&local_480);
  *(undefined1 *)((long)&this[1].field0_0x0 + 4) = local_474;
  *(int *)&this[1].field0_0x0 = local_478;
  if (bVar3 != 0) {
    *(int *)&this[2].field0_0x0 = iVar1;
  }
  if (*(char *)((long)&this[1].field0_0x0 + 4) != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  if (((ulong)this[1].field0_0x0 & 0x1000) != 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  if (*piVar9 != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,param_2);
  }
  pvVar7 = (void *)((long)param_1 + 0x5c);
  lVar8 = 0;
  do {
    if (*(char *)((long)pvVar7 + -0x24) != '\0') {
      local_454 = *(undefined4 *)((long)pvVar7 + -8);
      local_450 = *(undefined4 *)((long)pvVar7 + -4);
      local_468 = *(undefined4 *)((long)pvVar7 + -0x1c);
      uStack_464 = *(undefined4 *)((long)pvVar7 + -0x18);
      uStack_460 = *(undefined4 *)((long)pvVar7 + -0x14);
      uStack_45c = *(undefined4 *)((long)pvVar7 + -0x10);
      local_458 = (int)lVar8;
      FUN_100434990(param_1,param_2,0x18972,&local_468,0x1c,&DAT_1011ccb98,0);
      local_40 = (int)lVar8;
      _memcpy(local_440,pvVar7,0x400);
      FUN_100434990(param_1,param_2,200000,local_440,0x404,&DAT_1011ccb98,0);
    }
    lVar8 = lVar8 + 1;
    pvVar7 = (void *)((long)pvVar7 + 0x424);
  } while (lVar8 < 0x10);
  local_38[0] = (undefined4)param_1[0x850];
  FUN_100434990(param_1,param_2,0x18977,local_38,4,&DAT_1011ccb98,0);
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
  QMutex::unlock();
  local_490 = (QArrayData *)local_480.field0_0x0;
  if (1 < *(int *)local_480.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + 1;
    local_470 = *(int *)local_480.field0_0x0 != 0;
    UNLOCK();
  }
  local_484 = local_474;
  local_488 = local_478;
  FUN_100439570(param_1,&local_490);
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 != 0) {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + -1;
      local_470 = *(int *)local_490 != 0;
      UNLOCK();
      if ((bool)local_470) goto LAB_10043270d;
    }
    QArrayData::deallocate(local_490,2,8);
  }
LAB_10043270d:
  if (*(int *)local_480.field0_0x0 != -1) {
    if (*(int *)local_480.field0_0x0 != 0) {
      LOCK();
      *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_480.field0_0x0 != 0) {
        return;
      }
      local_470 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_480.field0_0x0,2,8);
  }
  return;
}

