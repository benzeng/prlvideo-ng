
undefined8 * FUN_10052cd00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  int local_50 [2];
  QArrayData *local_48;
  uint *local_40;
  undefined1 local_31;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((long)param_1 + 4) = 0xffffffff;
  auVar11._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar11._0_8_ = PTR_shared_null_100ba20d0;
  auVar11._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 1) = auVar11;
  *(undefined1 *)(param_1 + 3) = 0;
  pcVar2 = DAT_1011ccd60;
  local_48 = (QArrayData *)*param_2;
  if (*(int *)(local_48 + 4) == 0) {
    uVar3 = (*DAT_1011ccc38)();
    lVar5 = (*pcVar2)(uVar3,5);
    if (((lVar5 != 0) && (lVar6 = _CFArrayGetCount(lVar5), 0 < lVar6)) &&
       (lVar6 = _CFArrayGetValueAtIndex(lVar5,0), lVar6 != 0)) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFNumberGetTypeID();
      if (lVar7 == lVar8) {
        _CFNumberGetValue(lVar6,4,local_50);
        *(int *)((long)param_1 + 4) = local_50[0];
        if (local_50[0] != -1) {
          uVar3 = FUN_10052d070();
          *(undefined4 *)param_1 = uVar3;
        }
      }
    }
    if ((*(int *)((long)param_1 + 4) == -1) && (0 < DAT_1011b55f8)) {
      FUN_1008e3970("","WorkspacesMac",1,"Failed to query an active workspace");
    }
    if (lVar5 == 0) {
      return param_1;
    }
    _CFRelease(lVar5);
    return param_1;
  }
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_10052c370(&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052cd9e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10052cd9e:
  uVar9 = local_40[2];
  if (local_40[3] != uVar9) {
    if (1 < *local_40) {
      FUN_10052f290(&local_40,local_40[1]);
      uVar9 = local_40[2];
    }
    plVar10 = (long *)(*(long *)(local_40 + (long)(int)uVar9 * 2 + 4) + 0x10 +
                      (long)*(int *)(*(long *)(local_40 + (long)(int)uVar9 * 2 + 4) + 8) * 8);
    puVar4 = local_40;
    while( true ) {
      if (1 < *puVar4) {
        FUN_10052f290(&local_40,puVar4[1]);
        puVar4 = local_40;
      }
      if (plVar10 ==
          (long *)(*(long *)(puVar4 + (long)(int)puVar4[2] * 2 + 4) + 0x10 +
                  (long)*(int *)(*(long *)(puVar4 + (long)(int)puVar4[2] * 2 + 4) + 0xc) * 8))
      break;
      puVar1 = (undefined8 *)*plVar10;
      if (*(char *)(puVar1 + 3) != '\0') {
        *param_1 = *puVar1;
        QString::operator=((QString *)(param_1 + 1),(QString *)(puVar1 + 1));
        QString::operator=((QString *)(param_1 + 2),(QString *)(puVar1 + 2));
        param_1[3] = puVar1[3];
        puVar4 = local_40;
      }
      plVar10 = plVar10 + 1;
    }
  }
  FUN_10052ef30(&local_40);
  return param_1;
}

