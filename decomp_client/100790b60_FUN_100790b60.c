
void FUN_100790b60(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 2) == 0) {
    if (cVar1 != '\0') {
      uVar2 = uVar2 | 2;
LAB_100790b8a:
      *(uint *)(param_1 + 2) = uVar2;
      FUN_1008604a0(param_1,cVar1);
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = uVar2 & 0xfffffffd;
    goto LAB_100790b8a;
  }
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 4) == 0) {
    if (cVar1 != '\0') {
      uVar2 = uVar2 | 4;
LAB_100790bbc:
      *(uint *)(param_1 + 2) = uVar2;
      FUN_1008604f0(param_1,cVar1);
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = uVar2 & 0xfffffffb;
    goto LAB_100790bbc;
  }
  cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 8) == 0) {
    if (cVar1 != '\0') {
      uVar2 = uVar2 | 8;
LAB_100790bee:
      *(uint *)(param_1 + 2) = uVar2;
      FUN_100860550(param_1,cVar1);
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = uVar2 & 0xfffffff7;
    goto LAB_100790bee;
  }
  cVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x10) == 0) {
    if (cVar1 != '\0') {
      uVar2 = uVar2 | 0x10;
LAB_100790c20:
      *(uint *)(param_1 + 2) = uVar2;
      FUN_1008605b0(param_1,cVar1);
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = uVar2 & 0xffffffef;
    goto LAB_100790c20;
  }
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x20) == 0) {
    if (cVar1 != '\0') {
      uVar2 = uVar2 | 0x20;
LAB_100790c52:
      *(uint *)(param_1 + 2) = uVar2;
      FUN_100860610(param_1,cVar1);
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = uVar2 & 0xffffffdf;
    goto LAB_100790c52;
  }
  cVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x40) == 0) {
    if (cVar1 == '\0') goto LAB_100790c92;
    uVar2 = uVar2 | 0x40;
  }
  else {
    if (cVar1 != '\0') goto LAB_100790c92;
    uVar2 = uVar2 & 0xffffffbf;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_100860670(param_1,cVar1);
LAB_100790c92:
  cVar1 = (**(code **)(*param_1 + 200))(param_1);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x80) == 0) {
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = uVar2 | 0x80;
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = uVar2 & 0xffffff7f;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_1008606d0(param_1,cVar1);
  return;
}

