
undefined4 * FUN_100c6fe80(long param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined4 *)FUN_100c8d190();
  if (puVar3 == (undefined4 *)0x0) {
    FUN_100c62ee0(6,0x71,0x41,"evp_pkey.c",0x77);
  }
  else {
    *puVar3 = param_2;
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar4 = 0x76;
      uVar5 = 0x89;
    }
    else {
      pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0x48);
      if (pcVar1 == (code *)0x0) {
        uVar4 = 0x90;
        uVar5 = 0x84;
      }
      else {
        iVar2 = (*pcVar1)(puVar3,param_1);
        if (iVar2 != 0) {
          FUN_100c62060(0,*(undefined8 *)(*(undefined4 **)(*(long *)(puVar3 + 6) + 8) + 2),
                        **(undefined4 **)(*(long *)(puVar3 + 6) + 8));
          return puVar3;
        }
        uVar4 = 0x92;
        uVar5 = 0x80;
      }
    }
    FUN_100c62ee0(6,0x71,uVar4,"evp_pkey.c",uVar5);
    FUN_100c8d1b0(puVar3);
  }
  return (undefined4 *)0x0;
}

