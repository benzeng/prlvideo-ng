
undefined8 FUN_100bddf10(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_100cbc6f0(*(undefined8 *)(param_2 + 8));
  uVar5 = 0;
  if (iVar1 < 100) {
    puVar2 = (undefined8 *)FUN_100bf3540(0x60,"d1_pkt.c",0xe6);
    lVar3 = FUN_100cbc470(param_3,puVar2);
    if ((puVar2 == (undefined8 *)0x0) || (lVar3 == 0)) {
      if (puVar2 != (undefined8 *)0x0) {
        FUN_100bf3910(puVar2);
      }
      if (lVar3 != 0) {
        FUN_100cbc4c0(lVar3);
      }
      FUN_100c62ee0(0x14,0xf7,0x44,"d1_pkt.c",0xee);
    }
    else {
      *puVar2 = *(undefined8 *)(param_1 + 0x68);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x70);
      lVar4 = *(long *)(param_1 + 0x80);
      puVar2[4] = *(undefined8 *)(lVar4 + 0x100);
      uVar5 = *(undefined8 *)(lVar4 + 0xf0);
      puVar2[3] = *(undefined8 *)(lVar4 + 0xf8);
      puVar2[2] = uVar5;
      lVar4 = *(long *)(param_1 + 0x80);
      puVar2[0xb] = *(undefined8 *)(lVar4 + 0x150);
      puVar2[10] = *(undefined8 *)(lVar4 + 0x148);
      puVar2[9] = *(undefined8 *)(lVar4 + 0x140);
      puVar2[8] = *(undefined8 *)(lVar4 + 0x138);
      puVar2[7] = *(undefined8 *)(lVar4 + 0x130);
      uVar5 = *(undefined8 *)(lVar4 + 0x120);
      puVar2[6] = *(undefined8 *)(lVar4 + 0x128);
      puVar2[5] = uVar5;
      *(undefined8 **)(lVar3 + 8) = puVar2;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      lVar4 = *(long *)(param_1 + 0x80);
      *(undefined8 *)(lVar4 + 0x100) = 0;
      *(undefined8 *)(lVar4 + 0xf8) = 0;
      *(undefined8 *)(lVar4 + 0xf0) = 0;
      lVar4 = *(long *)(param_1 + 0x80);
      *(undefined8 *)(lVar4 + 0x150) = 0;
      *(undefined8 *)(lVar4 + 0x148) = 0;
      *(undefined8 *)(lVar4 + 0x140) = 0;
      *(undefined8 *)(lVar4 + 0x138) = 0;
      *(undefined8 *)(lVar4 + 0x130) = 0;
      *(undefined8 *)(lVar4 + 0x128) = 0;
      *(undefined8 *)(lVar4 + 0x120) = 0;
      iVar1 = FUN_100bd4050(param_1);
      if (iVar1 == 0) {
        uVar5 = 0x109;
      }
      else {
        lVar4 = FUN_100cbc540(*(undefined8 *)(param_2 + 8),lVar3);
        if (lVar4 != 0) {
          return 1;
        }
        uVar5 = 0x113;
      }
      FUN_100c62ee0(0x14,0xf7,0x44,"d1_pkt.c",uVar5);
      if (puVar2[2] != 0) {
        FUN_100bf3910();
      }
      FUN_100bf3910(puVar2);
      FUN_100cbc4c0(lVar3);
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

