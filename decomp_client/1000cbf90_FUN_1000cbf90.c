
void FUN_1000cbf90(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  puVar8 = *(uint **)(param_1 + 0x58);
  if ((int)puVar8[2] < (int)puVar8[3]) {
    plVar1 = (long *)(param_1 + 0x58);
    uVar10 = 0xffffffff;
    uVar13 = 0;
    do {
      if (1 < *puVar8) {
        FUN_1000e6e10(plVar1,puVar8[1]);
        puVar8 = (uint *)*plVar1;
      }
      lVar3 = *(long *)(puVar8 + ((long)(int)puVar8[2] + uVar13) * 2 + 4);
      iVar7 = QString::compare(lVar3 + 8,param_3,0);
      cVar6 = FUN_1000b95b0(lVar3,param_2);
      iVar12 = (int)uVar13;
      if (cVar6 != '\0') {
        plVar2 = (long *)(lVar3 + 0x38);
        puVar8 = *(uint **)(lVar3 + 0x38);
        uVar9 = puVar8[3] - puVar8[2];
        uVar10 = (ulong)uVar9;
        if (uVar9 == 0 || (int)puVar8[3] < (int)puVar8[2]) {
          bVar5 = false;
          goto LAB_1000cc295;
        }
        bVar5 = false;
        goto LAB_1000cc0a9;
      }
      if ((iVar7 == 0) &&
         (*(int *)(*(long *)(lVar3 + 0x38) + 0xc) == *(int *)(*(long *)(lVar3 + 0x38) + 8))) {
        if (param_2 == 0) break;
        uVar10 = uVar13 & 0xffffffff;
      }
      iVar12 = (int)uVar10;
      uVar13 = uVar13 + 1;
      puVar8 = (uint *)*plVar1;
    } while ((long)uVar13 < (long)(int)puVar8[3] - (long)(int)puVar8[2]);
    goto LAB_1000cc37b;
  }
  goto LAB_1000cc43d;
LAB_1000cc0a9:
  lVar11 = (long)((int)uVar10 + -1);
  uVar14 = (long)(int)uVar10;
  do {
    if (1 < *puVar8) {
      FUN_1000e7430(plVar2,puVar8[1]);
      puVar8 = (uint *)*plVar2;
    }
    uVar10 = uVar14 - 1;
    uVar9 = puVar8[2];
    if (*(long *)(*(long *)(puVar8 + (lVar11 + (int)uVar9) * 2 + 4) + 0x10) == param_2) {
      if (1 < *puVar8) {
        FUN_1000e7430(plVar2,puVar8[1]);
        puVar8 = (uint *)*plVar2;
        uVar9 = puVar8[2];
      }
      if ((*(byte *)(*(long *)(puVar8 + ((int)uVar9 + lVar11) * 2 + 4) + 0x1c) & 2) != 0) break;
    }
    lVar11 = lVar11 + -1;
    bVar4 = (long)uVar14 < 2;
    uVar14 = uVar10;
    if (bVar4) goto LAB_1000cc295;
  } while( true );
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  puVar8 = (uint *)*plVar2;
  if (1 < *puVar8) {
    FUN_1000e7430(plVar2,puVar8[1]);
    puVar8 = (uint *)*plVar2;
  }
  FUN_1000c8180(&local_40,&local_48,*(undefined8 *)(puVar8 + ((int)puVar8[2] + lVar11) * 2 + 4));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cc1ad;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000cc1ad:
  FUN_1000c4970(lVar3 + 0x30,0x79,local_40 + *(long *)(local_40 + 0x10),
                *(undefined4 *)(local_40 + 4));
  puVar8 = (uint *)*plVar2;
  if (1 < *puVar8) {
    FUN_1000e7430(plVar2,puVar8[1]);
    puVar8 = (uint *)*plVar2;
  }
  uVar9 = puVar8[2];
  *(uint *)(*(long *)(puVar8 + ((int)uVar9 + lVar11) * 2 + 4) + 0x1c) =
       *(uint *)(*(long *)(puVar8 + ((int)uVar9 + lVar11) * 2 + 4) + 0x1c) & 0xfffffff9;
  if (1 < *puVar8) {
    FUN_1000e7430(plVar2,puVar8[1]);
    puVar8 = (uint *)*plVar2;
    uVar9 = puVar8[2];
  }
  if (*(int *)(*(long *)(puVar8 + ((int)uVar9 + lVar11) * 2 + 4) + 0x1c) == 0) {
    FUN_1000e4b40(plVar2,uVar10 & 0xffffffff);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cc272;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000cc272:
  puVar8 = (uint *)*plVar2;
  bVar5 = true;
  if ((int)uVar14 < 2) goto LAB_1000cc295;
  goto LAB_1000cc0a9;
LAB_1000cc295:
  if (puVar8[3] != puVar8[2]) {
    cVar6 = FUN_1000cbd40(param_1,lVar3);
    if (cVar6 == '\0') {
      if (bVar5) {
        FUN_1000cb9e0(param_1,lVar3);
      }
      if (*(int *)(*plVar2 + 0xc) - *(int *)(*plVar2 + 8) == 1) {
        puVar8 = *(uint **)(lVar3 + 0x18);
        uVar9 = puVar8[1];
        if (uVar9 != 0) {
          if ((1 < *puVar8) || (*(long *)(puVar8 + 4) != 0x18)) {
            QByteArray::reallocData((undefined8 *)(lVar3 + 0x18),uVar9 + 1,puVar8[2] >> 0x1f);
            puVar8 = *(uint **)(lVar3 + 0x18);
            uVar9 = puVar8[1];
          }
          FUN_1000c4970(lVar3 + 0x30,0x7d,(long)puVar8 + *(long *)(puVar8 + 4),uVar9);
        }
      }
    }
    else if ((-1 < iVar12) && (iVar12 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8))) {
      FUN_1000e53a0(plVar1,uVar13 & 0xffffffff);
      FUN_1000df020(param_1);
      FUN_1000df110(param_1);
    }
    goto LAB_1000cc4d0;
  }
LAB_1000cc37b:
  if (-1 < iVar12) {
    puVar8 = (uint *)*plVar1;
    if (1 < *puVar8) {
      FUN_1000e6e10(plVar1,puVar8[1]);
      puVar8 = (uint *)*plVar1;
    }
    lVar3 = *(long *)(puVar8 + ((long)iVar12 + (long)(int)puVar8[2]) * 2 + 4);
    if ((*(int *)(lVar3 + 0x30) == 0) && (*(int *)(lVar3 + 0x34) == 0)) {
      if (((*(uint *)(lVar3 + 0x24) & 0x10) == 0) && (*(long *)(lVar3 + 0x28) == 0)) {
        if (iVar12 < (int)(puVar8[3] - puVar8[2])) {
          FUN_1000e53a0(plVar1,iVar12);
          FUN_1000df020(param_1);
          FUN_1000df110(param_1);
        }
      }
      else {
        *(uint *)(lVar3 + 0x24) = *(uint *)(lVar3 + 0x24) | 2;
      }
    }
    else {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                      *(int *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x34),0x57c);
      }
      FUN_1000c6a60(param_1,lVar3 + 0x30);
      if (iVar12 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8)) {
        FUN_1000e53a0(plVar1,iVar12);
        FUN_1000df020(param_1);
        FUN_1000df110(param_1);
      }
    }
    goto LAB_1000cc4d0;
  }
LAB_1000cc43d:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",2,
                  "Failed to find helper for guest app with pid=0x%x and appPath=\"%s\"",param_2,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000cc4d0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1000cc4d0:
  QMutex::unlock();
  return;
}

