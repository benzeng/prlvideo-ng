
int FUN_100685160(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  void *local_50;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_32;
  
  lVar7 = param_1[7];
  local_38 = 0;
  cVar3 = (**(code **)(*param_1 + 0x150))();
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Fill disk range of unopened disk \"%s\". [%p]",
                  local_40 + *(long *)(local_40 + 0x10),param_1[1]);
    iVar4 = -0x7ffdefdf;
    iVar5 = iVar4;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_32 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_1006854b4;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    uVar13 = param_3 * lVar7;
    iVar4 = -0x7ffdefef;
    iVar5 = iVar4;
    if (uVar13 == 0) goto LAB_1006854b4;
    lVar7 = lVar7 * param_2;
    if ((DAT_1011bcbf0 == '\0') &&
       (lVar8 = (**(code **)(*param_1 + 0x160))(param_1), lVar8 == param_2 * param_1[7])) {
      iVar4 = (**(code **)(*(long *)param_1[1] + 0x80))((long *)param_1[1],lVar7,uVar13);
      if (-1 < iVar4) {
        iVar5 = 1000;
        local_50 = (void *)0x0;
        puVar10 = param_4;
        while( true ) {
          pcVar2 = (code *)*puVar10;
          if ((pcVar2 == (code *)0x0) && (puVar10[4] == 0)) goto LAB_100685509;
          if ((-1 < iVar5) && (1 < *(uint *)(puVar10 + 2))) {
            iVar4 = *(int *)((long)puVar10 + 0x14);
            if (iVar5 < *(int *)((long)puVar10 + 0x14)) {
              *(int *)((long)puVar10 + 0x14) = iVar5;
              local_50 = (void *)0x0;
              goto LAB_100685509;
            }
            *(int *)((long)puVar10 + 0x14) = iVar5;
            iVar5 = (uint)(iVar5 - iVar4) / *(uint *)(puVar10 + 2) + *(int *)(puVar10 + 3);
            *(int *)(puVar10 + 3) = iVar5;
          }
          if (pcVar2 != (code *)0x0) break;
          puVar10 = (undefined8 *)puVar10[4];
        }
        cVar3 = (*pcVar2)(iVar5,puVar10[1]);
        iVar4 = -0x7ffdefc8;
        local_50 = (void *)0x0;
        iVar5 = iVar4;
        if (cVar3 == '\0') goto LAB_1006854b4;
        goto LAB_100685509;
      }
      if (iVar4 != -0x7ffdefdc) {
        iVar5 = iVar4;
        if (iVar4 != -0x7ffffff8) goto LAB_1006854b4;
        DAT_1011bcbf0 = '\x01';
      }
    }
    local_50 = _valloc(0x100000);
    iVar4 = -0x7ffdefe0;
    iVar5 = iVar4;
    if (local_50 != (void *)0x0) {
      uVar12 = uVar13 >> 0x14;
      ___bzero(local_50,0x100000);
      lVar8 = 0;
      if (uVar12 != 0) {
        uVar11 = 0;
        do {
          cVar3 = (**(code **)(*(long *)param_1[1] + 0x48))
                            ((long *)param_1[1],local_50,0x100000,&local_38,
                             uVar11 * 0x100000 + lVar7);
          if (cVar3 == '\0') {
            iVar5 = FUN_100768f60();
            iVar4 = -0x7ffdefd9;
            if (iVar5 == 0x1c) {
              FUN_1008e3970("","dimg",0,"Disk is full at plain disk allocation!");
              iVar4 = -0x7ffdefde;
            }
            goto LAB_10068549e;
          }
          uVar9 = (uVar11 * 1000) / uVar12;
          puVar10 = param_4;
          while( true ) {
            pcVar2 = (code *)*puVar10;
            if ((pcVar2 == (code *)0x0) && (puVar10[4] == 0)) goto LAB_100685413;
            iVar5 = (int)uVar9;
            if ((-1 < iVar5) && (1 < *(uint *)(puVar10 + 2))) {
              iVar4 = *(int *)((long)puVar10 + 0x14);
              if (iVar5 < *(int *)((long)puVar10 + 0x14)) {
                *(int *)((long)puVar10 + 0x14) = iVar5;
                goto LAB_100685413;
              }
              *(int *)((long)puVar10 + 0x14) = iVar5;
              uVar6 = (uint)(iVar5 - iVar4) / *(uint *)(puVar10 + 2) + *(int *)(puVar10 + 3);
              uVar9 = (ulong)uVar6;
              *(uint *)(puVar10 + 3) = uVar6;
            }
            if (pcVar2 != (code *)0x0) break;
            puVar10 = (undefined8 *)puVar10[4];
          }
          cVar3 = (*pcVar2)(uVar9 & 0xffffffff,puVar10[1]);
          iVar4 = -0x7ffdefc8;
          if (cVar3 == '\0') goto LAB_10068549e;
LAB_100685413:
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
        lVar8 = uVar11 * 0x100000;
      }
      if ((uVar13 & 0xfffff) != 0) {
        cVar3 = (**(code **)(*(long *)param_1[1] + 0x48))
                          ((long *)param_1[1],local_50,uVar13 & 0xfffff,&local_38,lVar8 + lVar7);
        iVar4 = -0x7ffdefd9;
        if (cVar3 == '\0') {
LAB_10068549e:
          _free(local_50);
          iVar5 = iVar4;
          goto LAB_1006854b4;
        }
      }
LAB_100685509:
      _free(local_50);
      return 0;
    }
  }
LAB_1006854b4:
  while( true ) {
    pcVar2 = (code *)*param_4;
    if ((pcVar2 == (code *)0x0) && (param_4[4] == 0)) {
      return iVar5;
    }
    if ((-1 < iVar4) && (1 < *(uint *)(param_4 + 2))) {
      iVar1 = *(int *)((long)param_4 + 0x14);
      if (iVar4 < *(int *)((long)param_4 + 0x14)) {
        *(int *)((long)param_4 + 0x14) = iVar4;
        return iVar5;
      }
      *(int *)((long)param_4 + 0x14) = iVar4;
      iVar4 = (uint)(iVar4 - iVar1) / *(uint *)(param_4 + 2) + *(int *)(param_4 + 3);
      *(int *)(param_4 + 3) = iVar4;
    }
    if (pcVar2 != (code *)0x0) break;
    param_4 = (undefined8 *)param_4[4];
  }
  (*pcVar2)(iVar4,param_4[1]);
  return iVar5;
}

