
void FUN_1000b20f0(long param_1,char param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x1ab8) != '\0') {
    uVar3 = 0;
    while( true ) {
      uVar2 = *(uint *)(param_1 + 0x1164);
      if (uVar2 == 0) {
        uVar2 = *(uint *)(param_1 + 0x5d8);
        *(uint *)(param_1 + 0x1164) = uVar2;
      }
      if (uVar2 <= uVar3) break;
      lVar1 = *(long *)(param_1 + 0x1810 + (ulong)uVar3 * 8);
      if (lVar1 == 0) {
LAB_1000b2130:
        uVar3 = uVar3 + 1;
      }
      else {
        if (-1 < *(int *)(lVar1 + 0xf4)) {
          if (2 < DAT_1011b55f8) {
            FUN_1008e3970("","vm",3,"Restrict priority change on VCPU%u",
                          *(undefined4 *)(lVar1 + 0x110));
          }
          goto LAB_1000b2130;
        }
        FUN_10008fa90(lVar1,6,&DAT_1011ccb98,3,1,(param_2 == '\0') * '\x02' + '\x01');
        uVar3 = uVar3 + 1;
      }
    }
  }
  return;
}

