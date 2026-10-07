
undefined8 FUN_1008c4cf0(undefined8 *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  pcVar3 = _strchr(param_2,0x3a);
  if (pcVar3 == (char *)0x0) {
    uVar5 = 0;
    iVar2 = _sscanf(param_2,"%d.%d.%d.%d",&local_50,&local_54,&local_58,&local_5c);
    if ((iVar2 == 4) && ((local_54 | local_50 | local_58 | local_5c) < 0x100)) {
      *(char *)param_1 = (char)local_50;
      *(char *)((long)param_1 + 1) = (char)local_54;
      *(char *)((long)param_1 + 2) = (char)local_58;
      *(char *)((long)param_1 + 3) = (char)local_5c;
      uVar5 = 4;
    }
  }
  else {
    local_40 = 0;
    local_3c = -1;
    local_38 = 0;
    uVar5 = 0;
    uVar4 = 0;
    iVar2 = FUN_1008d15f0(param_2,0x3a,0,FUN_1008c50d0,&local_50);
    if (iVar2 != 0) {
      if ((long)local_3c == 0xffffffffffffffff) {
        uVar5 = uVar4;
        if (local_40 != 0x10) goto LAB_1008c4e9a;
      }
      else {
        if ((local_40 == 0x10) || (3 < local_38)) goto LAB_1008c4e9a;
        if (local_38 == 2) {
          if ((local_3c != 0) && (uVar5 = uVar4, local_3c != local_40)) goto LAB_1008c4e9a;
        }
        else if (local_38 == 3) {
          uVar5 = uVar4;
          if (0 < local_40) goto LAB_1008c4e9a;
        }
        else {
          uVar5 = uVar4;
          if ((local_3c == 0) || (local_3c == local_40)) goto LAB_1008c4e9a;
        }
        if (-1 < local_3c) {
          _memcpy(param_1,&local_50,(long)local_3c);
          ___bzero((long)local_3c + (long)param_1,0x10 - (long)local_40);
          uVar5 = 0x10;
          if (local_40 != local_3c) {
            _memcpy((void *)((long)param_1 + (0x10 - (long)local_40) + (long)local_3c),
                    (void *)((long)&local_50 + (long)local_3c),(long)(local_40 - local_3c));
          }
          goto LAB_1008c4e9a;
        }
      }
      param_1[1] = local_48;
      *param_1 = CONCAT44(uStack_4c,local_50);
      uVar5 = 0x10;
    }
  }
LAB_1008c4e9a:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

