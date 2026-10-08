
void FUN_1000cb340(long param_1,undefined4 param_2,uint param_3,char param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  bool bVar13;
  QArrayData *local_60;
  QArrayData *local_58;
  ulong local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  puVar6 = *(uint **)(param_1 + 0x58);
  uVar10 = 0;
  if ((int)puVar6[2] < (int)puVar6[3]) {
    plVar1 = (long *)(param_1 + 0x58);
    do {
      if (1 < *puVar6) {
        FUN_1000e6e10(plVar1,puVar6[1]);
        puVar6 = (uint *)*plVar1;
      }
      lVar3 = *(long *)(puVar6 + ((long)(int)puVar6[2] + uVar10) * 2 + 4);
      cVar5 = FUN_1000b95b0(lVar3);
      if ((cVar5 != '\0') && (*(char *)(lVar3 + 0x60) == '\0')) {
        plVar2 = (long *)(lVar3 + 0x38);
        puVar6 = *(uint **)(lVar3 + 0x38);
        if ((int)puVar6[3] <= (int)puVar6[2]) goto LAB_1000cb49a;
        uVar12 = 0;
        goto LAB_1000cb450;
      }
      uVar10 = uVar10 + 1;
      puVar6 = (uint *)*plVar1;
    } while ((long)uVar10 < (long)(int)puVar6[3] - (long)(int)puVar6[2]);
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",2,"Failed to find helper for guest app with pid=0x%x",
                  param_2);
  }
  goto LAB_1000cb40d;
  while (uVar12 = uVar12 + 1, (long)uVar12 < (long)(int)puVar6[3] - (long)(int)uVar7) {
LAB_1000cb450:
    if (1 < *puVar6) {
      FUN_1000e7430(plVar2,puVar6[1]);
      puVar6 = (uint *)*plVar2;
    }
    uVar7 = puVar6[2];
    if ((ulong)param_3 == **(ulong **)(puVar6 + (uVar12 + (long)(int)uVar7) * 2 + 4)) {
      if (1 < *puVar6) {
        FUN_1000e7430(plVar2);
        puVar6 = (uint *)*plVar2;
        uVar7 = puVar6[2];
      }
      bVar13 = *(char *)(*(long *)(puVar6 + ((long)(int)uVar7 + uVar12) * 2 + 4) + 0x1a) != '\0';
      if (param_4 == '\0') {
        bVar11 = 0;
      }
      else {
        uVar8 = *puVar6;
        if (1 < uVar8) {
          FUN_1000e7430(plVar2,puVar6[1]);
          puVar6 = (uint *)*plVar2;
          uVar8 = *puVar6;
          uVar7 = puVar6[2];
        }
        bVar11 = *(byte *)(*(long *)(puVar6 + ((long)(int)uVar7 + uVar12) * 2 + 4) + 0x1c);
        if (1 < uVar8) {
          FUN_1000e7430(plVar2,puVar6[1]);
          puVar6 = (uint *)*plVar2;
          uVar7 = puVar6[2];
        }
        bVar11 = bVar11 >> 1 & 1;
        *(uint *)(*(long *)(puVar6 + ((long)(int)uVar7 + uVar12) * 2 + 4) + 0x1c) =
             *(uint *)(*(long *)(puVar6 + ((long)(int)uVar7 + uVar12) * 2 + 4) + 0x1c) & 0xfffffff9;
        if ((ulong)param_3 == *(ulong *)(lVar3 + 0x68)) {
          *(undefined8 *)(lVar3 + 0x68) = 0;
        }
      }
      puVar6 = (uint *)*plVar2;
      if (1 < *puVar6) {
        FUN_1000e7430(plVar2,puVar6[1]);
        puVar6 = (uint *)*plVar2;
      }
      if (*(int *)(*(long *)(puVar6 + ((long)(int)puVar6[2] + uVar12) * 2 + 4) + 0x1c) == 0) {
        FUN_1000e4b40(plVar2,uVar12 & 0xffffffff);
        puVar6 = (uint *)*plVar2;
      }
      goto LAB_1000cb5a0;
    }
  }
LAB_1000cb49a:
  bVar11 = 0;
  bVar13 = false;
LAB_1000cb5a0:
  iVar9 = (int)uVar10;
  if (puVar6[3] != puVar6[2]) {
    if (bVar13) {
      FUN_1000cb9e0(param_1,lVar3);
    }
    if (bVar11 != 0) {
      local_40 = (QArrayData *)PTR_shared_null_1021e1288;
      local_48 = (QArrayData *)PTR_shared_null_1021e1288;
      local_50 = (ulong)param_3;
      FUN_1000c8180(&local_40,&local_48,&local_50);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000cb770;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1000cb770:
      FUN_1000c4970(lVar3 + 0x30,0x79,local_40 + *(long *)(local_40 + 0x10),
                    *(undefined4 *)(local_40 + 4));
      cVar5 = FUN_1000cbd40(param_1,lVar3);
      bVar13 = false;
      if (((cVar5 != '\0') && (bVar13 = true, -1 < iVar9)) &&
         (iVar9 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8))) {
        FUN_1000e53a0(plVar1,uVar10 & 0xffffffff);
        FUN_1000df020(param_1);
        FUN_1000df110(param_1);
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000cb800;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1000cb800:
      if (bVar13) goto LAB_1000cb40d;
    }
    if (*(int *)(*plVar2 + 0xc) - *(int *)(*plVar2 + 8) == 1) {
      puVar6 = *(uint **)(lVar3 + 0x18);
      uVar7 = puVar6[1];
      if (uVar7 != 0) {
        if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
          QByteArray::reallocData((undefined8 *)(lVar3 + 0x18),uVar7 + 1,puVar6[2] >> 0x1f);
          puVar6 = *(uint **)(lVar3 + 0x18);
          uVar7 = puVar6[1];
        }
        FUN_1000c4970(lVar3 + 0x30,0x7d,(long)puVar6 + *(long *)(puVar6 + 4),uVar7);
      }
    }
    goto LAB_1000cb40d;
  }
  if ((*(int *)(lVar3 + 0x30) == 0) && (*(int *)(lVar3 + 0x34) == 0)) {
    if (((*(uint *)(lVar3 + 0x24) & 0x10) == 0) && (*(long *)(lVar3 + 0x28) == 0)) {
      if ((-1 < iVar9) && (iVar9 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8))) {
        FUN_1000e53a0(plVar1,uVar10 & 0xffffffff);
        FUN_1000df020(param_1);
        FUN_1000df110(param_1);
      }
    }
    else {
      *(uint *)(lVar3 + 0x24) = *(uint *)(lVar3 + 0x24) | 2;
    }
    goto LAB_1000cb40d;
  }
  uVar12 = *(ulong *)(lVar3 + 0x30);
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                  uVar12 & 0xffffffff,*(undefined4 *)(lVar3 + 0x34),0x50d);
  }
  FUN_1000c6a60(param_1,(ulong *)(lVar3 + 0x30));
  local_58 = *(QArrayData **)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_60 = *(QArrayData **)(lVar3 + 8);
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  FUN_1000b0b40(uVar4,&local_58,&local_60,uVar12);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cb689;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000cb689:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cb6b9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000cb6b9:
  if ((-1 < iVar9) && (iVar9 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8))) {
    FUN_1000e53a0(plVar1,uVar10 & 0xffffffff);
    FUN_1000df020(param_1);
    FUN_1000df110(param_1);
  }
LAB_1000cb40d:
  QMutex::unlock();
  return;
}

