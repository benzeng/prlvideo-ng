
undefined8 FUN_1002c3e50(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  QArrayData *local_460;
  QArrayData *local_458;
  uint local_450;
  int local_44c;
  undefined *local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_448 = PTR_shared_null_100ba2188;
  local_38 = lVar2;
  FUN_10051afa0(param_1 + 0x90,&local_448);
  FUN_100013180(&local_448);
  iVar1 = FUN_1000ec2a0();
  if (iVar1 == 0) {
    uVar4 = 1;
    if (DAT_1011c568c < 0) goto LAB_1002c4158;
    pcVar3 = "SARE: Can\'t start SARE subsystem read!";
  }
  else {
    local_450 = 0;
    iVar1 = FUN_1000ec3b0(&local_450,4,&local_44c,0);
    if (iVar1 == 0) {
      uVar4 = 1;
      if (DAT_1011c568c < 0) goto LAB_1002c4158;
      pcVar3 = "SARE: Can\'t read data from SARE subsystem!";
    }
    else {
      if (-1 < DAT_1011c568c) {
        if (local_44c == 0) {
          pcVar3 = "Err";
        }
        else {
          pcVar3 = "Ok";
        }
        FUN_1008e3970("","USB",0,"SARE: Load count = %d -> %s",local_450,pcVar3);
      }
      if (local_450 != 0) {
        uVar5 = 0;
        do {
          iVar1 = FUN_1000ec3b0(local_438,0x400,&local_44c,0);
          if (iVar1 == 0) {
            lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
            if (-1 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"SARE: Can\'t read data from SARE subsystem!");
            }
            uVar4 = 1;
            goto LAB_1002c4158;
          }
          _strlen(local_438);
          QString::fromUtf8_helper((char *)&local_460,(int)local_438);
          QString::normalized(&local_458,&local_460,1);
          FUN_10000c490(param_1 + 0x90,&local_458);
          if (*(int *)local_458 != -1) {
            if (*(int *)local_458 != 0) {
              LOCK();
              *(int *)local_458 = *(int *)local_458 + -1;
              local_439 = *(int *)local_458 != 0;
              UNLOCK();
              if ((bool)local_439) goto LAB_1002c403c;
            }
            QArrayData::deallocate(local_458,2,8);
          }
LAB_1002c403c:
          if (*(int *)local_460 != -1) {
            if (*(int *)local_460 != 0) {
              LOCK();
              *(int *)local_460 = *(int *)local_460 + -1;
              local_439 = *(int *)local_460 != 0;
              UNLOCK();
              if ((bool)local_439) goto LAB_1002c4078;
            }
            QArrayData::deallocate(local_460,2,8);
          }
LAB_1002c4078:
          if (1 < DAT_1011c568c) {
            pcVar3 = "Ok";
            if (local_44c == 0) {
              pcVar3 = "Err";
            }
            FUN_1008e3970("","USB",0,"SARE: Load[%d] = <%s>  -> %s",uVar5,local_438,pcVar3);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_450);
      }
      iVar1 = FUN_1000ec640();
      uVar4 = 0;
      lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((iVar1 != 0) || (uVar4 = 1, DAT_1011c568c < 0)) goto LAB_1002c4158;
      pcVar3 = "SARE: Can\'t stop SARE subsystem read!";
    }
  }
  uVar4 = 1;
  FUN_1008e3970("","USB",0,pcVar3);
LAB_1002c4158:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

