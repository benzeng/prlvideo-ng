
undefined8 * FUN_100adbd80(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar5 = 0;
LAB_100adbdc0:
  puVar7 = *(undefined8 **)(param_2 + uVar5 * 8);
  local_40 = puVar7;
LAB_100adbdd0:
  do {
    if (puVar7 == (undefined8 *)0x0) break;
    QString::fromUtf16((ushort *)&local_50,(int)puVar7[0x11]);
    QString::normalized(&local_48,&local_50,1,0);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100adbe31;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100adbe31:
    iVar3 = QString::compare(&local_48,param_3,0);
    if (iVar3 == 0) {
LAB_100adbe9a:
      FUN_100adc750(param_1,&local_40);
    }
    else {
      lVar2 = *param_4;
      iVar3 = *(int *)(lVar2 + 8);
      puVar4 = (ulong *)(lVar2 + 0x10 + (long)iVar3 * 8);
      iVar1 = *(int *)(lVar2 + 0xc);
      if (iVar3 == iVar1) {
LAB_100adbe90:
        if (puVar4 != (ulong *)(lVar2 + 0x10 + (long)iVar1 * 8)) goto LAB_100adbe9a;
      }
      else {
        lVar6 = (long)iVar1 * 8 + (long)iVar3 * -8;
        do {
          if (*puVar4 == (ulong)*(uint *)(puVar7 + 1)) goto LAB_100adbe90;
          puVar4 = puVar4 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    puVar7 = (undefined8 *)*puVar7;
    local_40 = puVar7;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100adbdd0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  } while( true );
  uVar5 = uVar5 + 1;
  if (0xff < uVar5) {
    return param_1;
  }
  goto LAB_100adbdc0;
}

