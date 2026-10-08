
undefined8
FUN_1009cf9d0(undefined8 *param_1,ushort *param_2,undefined8 *param_3,ulong *param_4,int param_5)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulong *puVar4;
  ushort *puVar5;
  ulong uVar6;
  
  puVar4 = (ulong *)*param_3;
  uVar2 = 0;
  puVar1 = (ushort *)*param_1;
  do {
    if (param_2 <= puVar1) {
LAB_1009cfa9c:
      *param_1 = puVar1;
      *param_3 = puVar4;
      return uVar2;
    }
    puVar5 = puVar1 + 1;
    uVar6 = (ulong)*puVar1;
    uVar3 = *puVar1 & 0xfc00;
    if (uVar3 == 0xd800) {
      if (param_2 <= puVar5) {
        uVar2 = 1;
        goto LAB_1009cfa9c;
      }
      if ((*puVar5 & 0xfc00) == 0xdc00) {
        uVar6 = uVar6 * 0x400 + -0x35fdc00 + (ulong)*puVar5;
        puVar5 = puVar1 + 2;
      }
      else if (param_5 == 0) {
        uVar2 = 3;
        goto LAB_1009cfa9c;
      }
    }
    else if ((param_5 == 0) && (uVar3 == 0xdc00)) {
      uVar2 = 3;
      goto LAB_1009cfa9c;
    }
    if (param_4 <= puVar4) {
      uVar2 = 2;
      goto LAB_1009cfa9c;
    }
    *puVar4 = uVar6;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
  } while( true );
}

