
void FUN_10038faa0(int *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte local_1c [4];
  uint local_18;
  uint local_14;
  
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 1;
  bVar1 = true;
  if (1 < param_2) goto LAB_10038fb6a;
  iVar3 = *param_1;
  bVar1 = true;
  if (iVar3 < 0x36000) {
    if (iVar3 == 0x2a500) {
LAB_10038fb5d:
      *(undefined1 *)(param_1 + 0x13) = 0;
      bVar1 = false;
    }
  }
  else if (iVar3 < 0x48000) {
    if (iVar3 == 0x36000) {
      _Gestalt(0x73797331,&local_14);
      _Gestalt(0x73797332,&local_18);
      _Gestalt(0x73797333,local_1c);
      uVar2 = (uint)local_1c[0] | (local_18 & 0xff) << 8 | (local_14 & 0xff) << 0x10;
      bVar1 = 0xa0800 < uVar2;
      *(bool *)(param_1 + 0x13) = 0xa0800 < uVar2;
    }
    else if (iVar3 == 0x37000) goto LAB_10038fb5d;
  }
  else if ((iVar3 == 0x48000) || (iVar3 == 0x4a600)) goto LAB_10038fb5d;
  param_1[0x14] = 0;
LAB_10038fb6a:
  iVar3 = FUN_1007da300("video.cb_ubo",bVar1);
  *(bool *)(param_1 + 0x13) = iVar3 != 0;
  iVar3 = FUN_1007da300("video.cb_mode",param_1[0x14]);
  param_1[0x14] = iVar3;
  return;
}

