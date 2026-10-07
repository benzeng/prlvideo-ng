
undefined8 FUN_1002c3af0(long param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  QArrayData *local_448;
  uint local_440;
  undefined1 local_439;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = *(int *)(*(long *)(param_1 + 0x90) + 0xc) - *(int *)(*(long *)(param_1 + 0x90) + 8);
  local_440 = uVar5;
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"SARE: Save list (count = %d)",uVar5);
  }
  iVar1 = FUN_1000ed430(uVar5 + 1);
  if (iVar1 == 0) {
    uVar8 = 1;
    if (DAT_1011c568c < 0) {
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      FUN_1008e3970("","USB",0,"SARE: Can\'t start SARE subsystem write!");
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
  else {
    iVar1 = FUN_1000ed5c0(&local_440,4);
    if (iVar1 == 0) {
      uVar8 = 1;
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (DAT_1011c568c < 0) goto LAB_1002c3dd9;
      pcVar3 = "SARE: Can\'t write data to SARE subsystem!";
    }
    else {
      if (local_440 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x90);
        uVar5 = 0;
        do {
          ___bzero(local_438,0x400);
          if (1 < *(uint *)*puVar7) {
            FUN_100022c80(puVar7,((uint *)*puVar7)[1]);
          }
          QString::toUtf8();
          lVar6 = *(long *)(local_448 + 0x10);
          puVar2 = (uint *)*puVar7;
          if (1 < *puVar2) {
            FUN_100022c80(puVar7,puVar2[1]);
            puVar2 = (uint *)*puVar7;
          }
          sVar4 = (size_t)*(uint *)(*(long *)(puVar2 + ((long)(int)puVar2[2] + (long)(int)uVar5) * 2
                                                       + 4) + 4);
          if (0x3fe < sVar4) {
            sVar4 = 0x3ff;
          }
          _memcpy(local_438,local_448 + lVar6,sVar4);
          if (*(int *)local_448 != -1) {
            if (*(int *)local_448 != 0) {
              LOCK();
              *(int *)local_448 = *(int *)local_448 + -1;
              local_439 = *(int *)local_448 != 0;
              UNLOCK();
              if ((bool)local_439) goto LAB_1002c3c76;
            }
            QArrayData::deallocate(local_448,1,8);
          }
LAB_1002c3c76:
          if (1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"SARE: Save[%d] = <%s>",1,local_438);
          }
          iVar1 = FUN_1000ed5c0(local_438,0x400);
          if (iVar1 == 0) {
            lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
            if (-1 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"SARE: Can\'t write data to SARE subsystem!");
            }
            uVar8 = 1;
            goto LAB_1002c3dd9;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_440);
      }
      iVar1 = FUN_1000ed7d0();
      uVar8 = 0;
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((iVar1 != 0) || (uVar8 = 1, DAT_1011c568c < 0)) goto LAB_1002c3dd9;
      pcVar3 = "SARE: Can\'t stop SARE subsystem write!";
    }
    uVar8 = 1;
    FUN_1008e3970("","USB",0,pcVar3);
  }
LAB_1002c3dd9:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

