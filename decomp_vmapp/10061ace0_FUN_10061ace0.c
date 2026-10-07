
ulong FUN_10061ace0(long *param_1,ulong *param_2,uint param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong *puVar4;
  uint uVar5;
  bool bVar6;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if ((char)param_1[0x18] == '\0') {
    pcVar3 = "Decryption";
    if (param_5 != '\0') {
      pcVar3 = "Encryption";
    }
    FUN_1008e3970("","EngAES",0,"%s function called without key setting",pcVar3);
    uVar2 = 0x80043000;
  }
  else if (param_2 == (ulong *)0x0) {
    FUN_1008e3970("","EngAES",0,"Can\'t encrypt data referenced by NULL pointer");
    uVar2 = 0x80000003;
  }
  else if ((param_3 & 0xf) == 0) {
    uVar1 = param_3 >> 4;
    if (param_5 == '\0') {
      param_2 = (ulong *)((long)param_2 + (ulong)(param_3 - 0x10));
      if (uVar1 != 1) {
        uVar5 = 1;
        do {
          uVar2 = (*(code *)param_1[0x1c])(param_1,param_2);
          *param_2 = *param_2 ^ param_2[-2];
          param_2[1] = param_2[1] ^ param_2[-1];
          param_2 = param_2 + -2;
          if ((int)uVar2 < 0) break;
          bVar6 = uVar5 < uVar1 - 1;
          uVar5 = uVar5 + 1;
        } while (bVar6);
        if ((int)uVar2 < 0) goto LAB_10061adaa;
      }
      uVar1 = (*(code *)param_1[0x1c])(param_1,param_2);
      (**(code **)(*param_1 + 0x70))(param_1,&local_48,param_4);
      *param_2 = *param_2 ^ local_48;
      param_2[1] = param_2[1] ^ local_40;
      if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
        return (ulong)uVar1;
      }
      goto LAB_10061aed2;
    }
    (**(code **)(*param_1 + 0x70))(param_1,&local_48,param_4);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar5 = 1;
      puVar4 = &local_48;
      do {
        *param_2 = *param_2 ^ *puVar4;
        param_2[1] = param_2[1] ^ puVar4[1];
        uVar2 = (*(code *)param_1[0x1d])(param_1,param_2);
        if ((int)uVar2 < 0) break;
        bVar6 = uVar5 < uVar1;
        uVar5 = uVar5 + 1;
        puVar4 = param_2;
        param_2 = param_2 + 2;
      } while (bVar6);
    }
  }
  else {
    FUN_1008e3970("","EngAES",0,"Engine asked to encrypt data not aligned to 128 bit [%u]",param_3);
    uVar2 = 0x80000003;
  }
LAB_10061adaa:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar2;
  }
LAB_10061aed2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

