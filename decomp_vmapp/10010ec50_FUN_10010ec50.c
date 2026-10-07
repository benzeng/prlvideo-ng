
undefined8 FUN_10010ec50(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  lVar3 = FUN_100544e90(0x20000);
  if (lVar3 != 0) {
    ___bzero(lVar3,0x20000);
    iVar1 = FUN_1000e9b10(lVar3,0x20000);
    if (iVar1 == 0) {
      FUN_100544ef0(lVar3,0x20000);
    }
    else {
      *(long *)(param_1 + 0x18) = lVar3;
      lVar4 = FUN_1000e9b50(lVar3,0x206,1,0x20030,0,0x10004);
      if (lVar4 != 0) {
        puVar5 = *(undefined8 **)(lVar4 + 0x30);
        if (puVar5 == (undefined8 *)0x0) {
          uVar6 = *(uint *)(lVar4 + 0x14);
          if (*(uint *)(lVar4 + 0x14) < *(uint *)(lVar4 + 0x10)) {
            uVar6 = *(uint *)(lVar4 + 0x10);
          }
          uVar6 = uVar6 + 0xfff & 0xfffff000;
          puVar5 = (undefined8 *)FUN_100544e90(uVar6);
          if ((puVar5 != (undefined8 *)0x0) && ((*(byte *)(lVar4 + 0xc) & 4) == 0)) {
            ___bzero(puVar5,uVar6);
          }
          *(undefined8 **)(lVar4 + 0x30) = puVar5;
        }
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[3] = 0;
          puVar5[2] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
          FUN_1007d7430(puVar5 + 2,0x20000);
          *(undefined4 *)((long)puVar5 + 4) = 0;
          uVar2 = FUN_1007da300("kernel.log.sync",0);
          *(undefined4 *)(puVar5 + 1) = uVar2;
          lVar3 = FUN_1000e9b50(lVar3,0x25b,1,0x1000,0,0x10000);
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x30);
            if (lVar4 == 0) {
              uVar6 = *(uint *)(lVar3 + 0x14);
              if (*(uint *)(lVar3 + 0x14) < *(uint *)(lVar3 + 0x10)) {
                uVar6 = *(uint *)(lVar3 + 0x10);
              }
              uVar6 = uVar6 + 0xfff & 0xfffff000;
              lVar4 = FUN_100544e90(uVar6);
              if ((lVar4 != 0) && ((*(byte *)(lVar3 + 0xc) & 4) == 0)) {
                ___bzero(lVar4,uVar6);
              }
              *(long *)(lVar3 + 0x30) = lVar4;
            }
            if (lVar4 != 0) {
              return 0;
            }
          }
        }
      }
      FUN_10010eb30(param_1);
    }
  }
  return 0x80000009;
}

