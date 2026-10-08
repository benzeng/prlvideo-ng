
undefined1 FUN_100cd3e40(long *param_1,int param_2,char param_3)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  Data *pDVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  uint local_44;
  int local_38;
  
  QMutex::lock();
  *(long *)(param_1[0x6f] + 0xf0) = *(long *)(param_1[0x6f] + 0xf0) + 1;
  uVar5 = FUN_100cdf2d0(param_2);
  if (uVar5 == 0) {
    plVar1 = param_1 + 4;
    puVar13 = (uint *)param_1[4];
    if (1 < *puVar13) {
      uVar7 = puVar13[2];
      pDVar9 = (Data *)QListData::detach((int)plVar1);
      lVar3 = *plVar1;
      lVar10 = (long)*(int *)(lVar3 + 8);
      puVar12 = (uint *)(lVar3 + 0x10 + lVar10 * 8);
      if ((puVar13 + (long)(int)uVar7 * 2 + 4 != puVar12) &&
         (lVar11 = *(int *)(lVar3 + 0xc) - lVar10, lVar11 != 0 && lVar10 <= *(int *)(lVar3 + 0xc)))
      {
        _memcpy(puVar12,puVar13 + (long)(int)uVar7 * 2 + 4,lVar11 * 8);
      }
      if (*(int *)pDVar9 != -1) {
        if (*(int *)pDVar9 != 0) {
          LOCK();
          *(int *)pDVar9 = *(int *)pDVar9 + -1;
          UNLOCK();
          if (*(int *)pDVar9 != 0) goto LAB_100cd40b7;
        }
        QListData::dispose(pDVar9);
      }
    }
LAB_100cd40b7:
    puVar12 = (uint *)*plVar1;
    puVar13 = puVar12 + (long)(int)puVar12[2] * 2 + 4;
    local_38 = 0;
    do {
      if (1 < *puVar12) {
        uVar7 = puVar12[2];
        pDVar9 = (Data *)QListData::detach((int)plVar1);
        lVar3 = *plVar1;
        lVar10 = (long)*(int *)(lVar3 + 8);
        puVar2 = (uint *)(lVar3 + 0x10 + lVar10 * 8);
        if ((puVar12 + (long)(int)uVar7 * 2 + 4 != puVar2) &&
           (lVar11 = *(int *)(lVar3 + 0xc) - lVar10, lVar11 != 0 && lVar10 <= *(int *)(lVar3 + 0xc))
           ) {
          _memcpy(puVar2,puVar12 + (long)(int)uVar7 * 2 + 4,lVar11 * 8);
        }
        if (*(int *)pDVar9 != -1) {
          if (*(int *)pDVar9 != 0) {
            LOCK();
            *(int *)pDVar9 = *(int *)pDVar9 + -1;
            UNLOCK();
            if (*(int *)pDVar9 != 0) goto LAB_100cd4140;
          }
          QListData::dispose(pDVar9);
        }
      }
LAB_100cd4140:
      if (puVar13 == (uint *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8))
      goto LAB_100cd41af;
      iVar6 = (**(code **)(**(long **)puVar13 + 0x100))();
      if ((iVar6 != 2) &&
         (iVar6 = (**(code **)(**(long **)puVar13 + 0xa8))(*(long **)puVar13,param_2,param_3),
         local_38 <= iVar6)) {
        local_38 = iVar6;
      }
      puVar13 = puVar13 + 2;
      puVar12 = (uint *)*plVar1;
    } while( true );
  }
  bVar14 = (*(uint *)(param_1 + 5) & uVar5) != 0;
  if (param_3 == '\0') {
    bVar14 = (*(uint *)(param_1 + 5) & uVar5) == 0;
  }
  plVar1 = param_1 + 4;
  puVar13 = (uint *)param_1[4];
  if (1 < *puVar13) {
    uVar7 = puVar13[2];
    pDVar9 = (Data *)QListData::detach((int)plVar1);
    lVar3 = *plVar1;
    lVar10 = (long)*(int *)(lVar3 + 8);
    puVar12 = (uint *)(lVar3 + 0x10 + lVar10 * 8);
    if ((puVar13 + (long)(int)uVar7 * 2 + 4 != puVar12) &&
       (lVar11 = *(int *)(lVar3 + 0xc) - lVar10, lVar11 != 0 && lVar10 <= *(int *)(lVar3 + 0xc))) {
      _memcpy(puVar12,puVar13 + (long)(int)uVar7 * 2 + 4,lVar11 * 8);
    }
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        UNLOCK();
        if (*(int *)pDVar9 != 0) goto LAB_100cd3f2d;
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_100cd3f2d:
  puVar12 = (uint *)*plVar1;
  puVar13 = puVar12 + (long)(int)puVar12[2] * 2 + 4;
  local_38 = 0;
  do {
    if (1 < *puVar12) {
      uVar7 = puVar12[2];
      pDVar9 = (Data *)QListData::detach((int)plVar1);
      lVar3 = *plVar1;
      lVar10 = (long)*(int *)(lVar3 + 8);
      puVar2 = (uint *)(lVar3 + 0x10 + lVar10 * 8);
      if ((puVar12 + (long)(int)uVar7 * 2 + 4 != puVar2) &&
         (lVar11 = *(int *)(lVar3 + 0xc) - lVar10, lVar11 != 0 && lVar10 <= *(int *)(lVar3 + 0xc)))
      {
        _memcpy(puVar2,puVar12 + (long)(int)uVar7 * 2 + 4,lVar11 * 8);
      }
      if (*(int *)pDVar9 != -1) {
        if (*(int *)pDVar9 != 0) {
          LOCK();
          *(int *)pDVar9 = *(int *)pDVar9 + -1;
          UNLOCK();
          if (*(int *)pDVar9 != 0) goto LAB_100cd3fc0;
        }
        QListData::dispose(pDVar9);
      }
    }
LAB_100cd3fc0:
    if (puVar13 == (uint *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8)) break;
    iVar6 = (**(code **)(**(long **)puVar13 + 0x100))();
    if ((iVar6 != 2) &&
       (iVar6 = (**(code **)(**(long **)puVar13 + 0xb0))
                          (*(long **)puVar13,uVar5,param_2,param_3,bVar14), local_38 <= iVar6)) {
      local_38 = iVar6;
    }
    puVar13 = puVar13 + 2;
    puVar12 = (uint *)*plVar1;
  } while( true );
  if (param_3 == '\0') {
    uVar7 = *(uint *)(param_1 + 5) & ~uVar5;
  }
  else {
    uVar7 = *(uint *)(param_1 + 5) | uVar5;
  }
  *(uint *)(param_1 + 5) = uVar7;
LAB_100cd41af:
  *(int *)((long)param_1 + 0x3b4) = param_2;
  *(char *)(param_1 + 0x77) = param_3;
  uVar4 = 1;
  if ((param_2 == 0x6e) && (param_3 == '\0')) goto LAB_100cd4347;
  local_44 = uVar5;
  switch(local_38) {
  case 0:
    if (param_2 == 0x5c) {
      iVar6 = 0xa6;
      if ((*(uint *)(param_1 + 5) & 0xf) == 0) {
        bVar14 = (*(uint *)(param_1 + 5) & 0x30) == 0;
        iVar8 = 0x5c;
        iVar6 = 0xa7;
LAB_100cd42d6:
        if (bVar14) {
          iVar6 = iVar8;
        }
      }
      if (iVar6 != param_2) {
        local_44 = FUN_100cdf2d0(iVar6);
        param_2 = iVar6;
      }
    }
    else if (param_2 == 0x6e) {
      bVar14 = (*(byte *)(param_1 + 5) & 3) == 0;
      iVar8 = 0x6e;
      iVar6 = 0xa5;
      goto LAB_100cd42d6;
    }
    FUN_100cd3d30(param_1,*(undefined4 *)((long)param_1 + 0x2c),1);
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    if (uVar5 == 0) {
      uVar4 = (**(code **)(*param_1 + 200))(param_1,param_2,param_3);
    }
    else {
      uVar4 = FUN_100cd3b80(param_1,local_44,param_2,param_3);
    }
    break;
  case 1:
    *(long *)(param_1[0x74] + 0xf0) = *(long *)(param_1[0x74] + 0xf0) + 1;
    if (*(int *)((long)param_1 + 0x34) == 1) {
      local_44 = uVar5 & 0xc0;
      if ((uVar5 & 0xffffff3f) != 0) {
        FUN_100cd3d30(param_1,uVar5 & 0xffffff3f,param_3);
      }
    }
    if (local_44 != 0) {
      if (param_3 == '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) & ~local_44;
      }
      else {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | local_44;
      }
    }
    break;
  case 2:
    *(long *)(param_1[0x75] + 0xf0) = *(long *)(param_1[0x75] + 0xf0) + 1;
    break;
  case 3:
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    *(long *)(param_1[0x73] + 0xf0) = *(long *)(param_1[0x73] + 0xf0) + 1;
    break;
  default:
    uVar4 = 0;
    FUN_100df99c0("","hid",0,"[CHIDHostHook] Wrong shortcut action result.");
  }
LAB_100cd4347:
  QMutex::unlock();
  return uVar4;
}

