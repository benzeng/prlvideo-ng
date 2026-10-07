
undefined8 FUN_1000ec2a0(void)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((DAT_1011b6d60 == 0) || (DAT_1011b6d40 == 0)) {
    FUN_1008e3970("","vm",0,"Invalid custom data. NULL ptr, line=%u",0x346);
  }
  else {
    iVar3 = *(int *)(DAT_1011b6d60 + 4);
    if (iVar3 == -0x75600003) {
      if (DAT_1011b6d78 == '\0') {
        if ((int)DAT_1011c37a0 != 0) {
          FUN_1008e3970("","vm",0,"%s: start loading",*(undefined8 *)(DAT_1011b6d40 + 0x2c));
        }
        DAT_1011b6d6c = 0;
        DAT_1011b6d78 = 1;
        return 1;
      }
      uVar2 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
      uVar4 = 0x353;
      pcVar1 = "Nested custom systems are not supported. Item %s 0x%x, line=%u";
      iVar3 = -0x75600003;
    }
    else {
      uVar2 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
      uVar4 = 0x34d;
      pcVar1 = "Invalid custom data. Item %s 0x%x, line=%u";
    }
    FUN_1008e3970("","vm",0,pcVar1,uVar2,iVar3,uVar4);
  }
  return 0;
}

