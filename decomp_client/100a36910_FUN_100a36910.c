
void FUN_100a36910(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *local_48;
  
  lVar3 = FUN_100a471c0(param_4);
  uVar5 = lVar3 + 0x34;
  local_48 = (undefined4 *)0x0;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_48 = operator_new(uVar5);
    lVar3 = -0x34 - lVar3;
    puVar4 = local_48;
    do {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((long)puVar4 + 1);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0);
    if (0x34 < uVar5) {
      FUN_100a47250(param_4,local_48 + 0xd);
    }
  }
  *local_48 = 0x20000;
  local_48[1] = 9;
  local_48[2] = 0;
  local_48[3] = (int)uVar5;
  local_48[0xc] = *(undefined4 *)(param_3 + 4);
  *(undefined8 *)(local_48 + 10) = param_3[3];
  *(undefined8 *)(local_48 + 8) = param_3[2];
  uVar1 = *param_3;
  *(undefined8 *)(local_48 + 6) = param_3[1];
  *(undefined8 *)(local_48 + 4) = uVar1;
  iVar2 = _PrlDevSIA_SendSIAData(*param_2,local_48,uVar5 & 0xffffffff);
  if ((iVar2 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("","SIAToolClient",1,"Can\'t send SIA command to vm. Err = 0x%x",iVar2);
  }
  if (local_48 != (undefined4 *)0x0) {
    operator_delete(local_48);
  }
  return;
}

