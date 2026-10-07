
int FUN_0040eca0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_58 [16];
  uint local_48 [6];
  
  iVar4 = -1;
  if (param_2 != 0) {
    if (param_1 == (uint *)0x0) {
      iVar4 = FUN_0040e780(local_48);
      puVar3 = local_48;
    }
    else {
      iVar4 = FUN_0040e6e0(param_1);
      puVar3 = param_1;
    }
    if (iVar4 == 0) {
      uVar5 = FUN_0040e7d0(param_2);
      uVar1 = *puVar3;
      iVar4 = FUN_0040e740(puVar3,local_58,uVar5 + 0x14);
      if (iVar4 == 0) {
        local_78 = 0x11;
        local_70 = 0;
        local_74 = 0;
        local_6c = 0;
        local_68 = 0x5b;
        local_67 = 0x47;
        local_66 = 0x5d;
        local_65 = 0x20;
        iVar4 = FUN_0040e7f0(puVar3,local_58,&local_78,0x14,0,0);
        if ((iVar4 == 0) && (uVar5 != 0)) {
          uVar6 = 0;
          while( true ) {
            uVar2 = uVar1;
            if (uVar5 <= uVar1) {
              uVar2 = uVar5;
            }
            iVar4 = FUN_0040e7f0(puVar3,local_58,(ulong)uVar6 + param_2,uVar2,0,0);
            if ((iVar4 != 0) || (uVar5 = uVar5 - uVar2, uVar5 == 0)) break;
            uVar6 = uVar6 + uVar2;
          }
        }
      }
      FUN_0040ec40(puVar3,local_58);
      if (param_1 == (uint *)0x0) {
        FUN_0040e6c0(local_48);
      }
    }
  }
  return iVar4;
}

