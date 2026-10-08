
undefined8 FUN_100bd9640(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  
  uVar3 = FUN_100be4ad0();
  iVar1 = FUN_100c60800(uVar3);
  if (iVar1 < 1) {
    return 1;
  }
  iVar1 = 0;
  while ((lVar4 = FUN_100c60820(uVar3,iVar1), (*(byte *)(lVar4 + 0x18) & 0xe0) == 0 &&
         ((*(byte *)(lVar4 + 0x20) & 0x40) == 0))) {
    iVar1 = iVar1 + 1;
    iVar2 = FUN_100c60800(uVar3);
    if (iVar2 <= iVar1) {
      return 1;
    }
  }
  if (*param_1 < 0x301) {
    return 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_100bf3910();
  }
  puVar5 = (undefined1 *)FUN_100bf3540(3,"t1_lib.c",0x6b9);
  *(undefined1 **)(param_1 + 0x88) = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    uVar3 = 0x6bb;
  }
  else {
    param_1[0x86] = 3;
    param_1[0x87] = 0;
    *puVar5 = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x88) + 1) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x88) + 2) = 2;
    if (*(long *)(param_1 + 0x8c) != 0) {
      FUN_100bf3910();
    }
    param_1[0x8a] = 0x32;
    param_1[0x8b] = 0;
    puVar5 = (undefined1 *)FUN_100bf3540(0x32,"t1_lib.c",0x6cb);
    *(undefined1 **)(param_1 + 0x8c) = puVar5;
    lVar4 = 0;
    if (puVar5 != (undefined1 *)0x0) {
      do {
        iVar1 = *(int *)((long)&DAT_101da28c0 + lVar4);
        if (iVar1 < 0x2c4) {
          if (iVar1 == 0x199) {
            uVar6 = 0x13;
          }
          else {
            if (iVar1 != 0x19f) goto switchD_100bd9875_caseD_2cd;
            uVar6 = 0x17;
          }
        }
        else {
          uVar6 = 1;
          switch(iVar1) {
          case 0x2c4:
            uVar6 = 0xf;
            break;
          case 0x2c5:
            uVar6 = 0x10;
            break;
          case 0x2c6:
            uVar6 = 0x11;
            break;
          case 0x2c7:
            uVar6 = 0x12;
            break;
          case 0x2c8:
            uVar6 = 0x14;
            break;
          case 0x2c9:
            uVar6 = 0x15;
            break;
          case 0x2ca:
            uVar6 = 0x16;
            break;
          case 0x2cb:
            uVar6 = 0x18;
            break;
          case 0x2cc:
            uVar6 = 0x19;
            break;
          default:
switchD_100bd9875_caseD_2cd:
            uVar6 = 0;
            break;
          case 0x2d1:
            break;
          case 0x2d2:
            uVar6 = 2;
            break;
          case 0x2d3:
            uVar6 = 3;
            break;
          case 0x2d4:
            uVar6 = 4;
            break;
          case 0x2d5:
            uVar6 = 5;
            break;
          case 0x2d6:
            uVar6 = 6;
            break;
          case 0x2d7:
            uVar6 = 7;
            break;
          case 0x2d8:
            uVar6 = 8;
            break;
          case 0x2d9:
            uVar6 = 9;
            break;
          case 0x2da:
            uVar6 = 10;
            break;
          case 0x2db:
            uVar6 = 0xb;
            break;
          case 0x2dc:
            uVar6 = 0xc;
            break;
          case 0x2dd:
            uVar6 = 0xd;
            break;
          case 0x2de:
            uVar6 = 0xe;
          }
        }
        *puVar5 = 0;
        puVar5[1] = uVar6;
        lVar4 = lVar4 + 4;
        puVar5 = puVar5 + 2;
        if (lVar4 == 100) {
          return 1;
        }
      } while( true );
    }
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    uVar3 = 0x6ce;
  }
  FUN_100c62ee0(0x14,0x119,0x41,"t1_lib.c",uVar3);
  return 0xffffffff;
}

