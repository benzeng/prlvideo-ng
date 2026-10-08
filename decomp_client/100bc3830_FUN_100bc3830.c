
undefined8 FUN_100bc3830(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  
  if (*(int *)(param_1 + 0x48) != 0x2130) {
LAB_100bc399e:
    uVar6 = FUN_100bd30a0(param_1,0x16);
    return uVar6;
  }
  puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x50) + 8);
  puVar1[4] = param_1[1];
  puVar1[5] = *param_1;
  lVar4 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(lVar4 + 0xbc);
  *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(lVar4 + 0xb4);
  uVar6 = *(undefined8 *)(lVar4 + 0xa4);
  *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(lVar4 + 0xac);
  *(undefined8 *)(puVar1 + 6) = uVar6;
  if (((*(byte *)(*(long *)(param_1 + 0x170) + 0x40) & 2) == 0) && (*(int *)(param_1 + 0xa8) == 0))
  {
    *(undefined4 *)(*(long *)(param_1 + 0x130) + 0x44) = 0;
  }
  sVar8 = (size_t)*(int *)(*(long *)(param_1 + 0x130) + 0x44);
  if ((long)sVar8 < 0x21) {
    puVar1[0x26] = (char)*(int *)(*(long *)(param_1 + 0x130) + 0x44);
    _memcpy(puVar1 + 0x27,(void *)(*(long *)(param_1 + 0x130) + 0x48),sVar8);
    iVar3 = FUN_100bce2a0(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x3a8),puVar1 + sVar8 + 0x27);
    lVar4 = (long)iVar3 + 0x27 + sVar8;
    if (*(undefined1 **)(*(long *)(param_1 + 0x80) + 0x410) == (undefined1 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined1 **)(*(long *)(param_1 + 0x80) + 0x410);
    }
    puVar1[lVar4] = uVar2;
    iVar3 = FUN_100bd9920(param_1);
    if (iVar3 < 1) {
      uVar6 = 0x113;
      uVar7 = 0x62f;
    }
    else {
      lVar4 = FUN_100bd7e70(param_1,puVar1 + lVar4 + 1,puVar1 + 0x4000);
      if (lVar4 != 0) {
        lVar5 = lVar4 - (long)(puVar1 + 4);
        *puVar1 = 2;
        puVar1[1] = (char)((ulong)lVar5 >> 0x10);
        puVar1[2] = (char)((ulong)lVar5 >> 8);
        puVar1[3] = (char)lVar5;
        *(undefined4 *)(param_1 + 0x48) = 0x2131;
        *(int *)(param_1 + 0x60) = (int)lVar4 - (int)puVar1;
        *(undefined4 *)(param_1 + 100) = 0;
        goto LAB_100bc399e;
      }
      uVar6 = 0x44;
      uVar7 = 0x637;
    }
  }
  else {
    uVar6 = 0x44;
    uVar7 = 0x618;
  }
  FUN_100c62ee0(0x14,0xf2,uVar6,"s3_srvr.c",uVar7);
  *(undefined4 *)(param_1 + 0x48) = 5;
  return 0xffffffff;
}

