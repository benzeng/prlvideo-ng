
undefined4 * FUN_100214659(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined4 *userdata;
  undefined8 uVar1;
  ulong uVar2;
  
  userdata = (undefined4 *)(*(code *)_xmlMalloc)(0xd8);
  if (userdata == (undefined4 *)0x0) {
    FUN_10021457c(0,"could not initialize basic types");
    return (undefined4 *)0x0;
  }
  _memset(userdata,0,0xd8);
  *(undefined8 *)(userdata + 4) = param_1;
  *(char **)(userdata + 0x34) = "http://www.w3.org/2001/XMLSchema";
  *userdata = 1;
  *(undefined8 *)(userdata + 0x1c) = param_3;
  userdata[0x17] = 6;
  if ((param_2 < 0x2d) && ((1L << ((byte)param_2 & 0x3f) & 0x18003020fffaU) != 0)) {
    userdata[0x16] = userdata[0x16] | 0x4000;
  }
  if (param_2 < 0x2f) {
    uVar2 = 1L << ((byte)param_2 & 0x3f);
    if ((uVar2 & 0xa080000) != 0) {
      userdata[0x16] = userdata[0x16] | 0x40;
      uVar1 = FUN_10021460f(1);
      *(undefined8 *)(userdata + 0x1e) = uVar1;
      userdata[0x16] = userdata[0x16] | 0x8000000;
      goto LAB_100214788;
    }
    if ((uVar2 & 0x600000000000) != 0) goto LAB_100214788;
  }
  userdata[0x16] = userdata[0x16] | 0x100;
LAB_100214788:
  _xmlHashAddEntry2(DAT_1011b87a0,*(xmlChar **)(userdata + 4),
                    (xmlChar *)"http://www.w3.org/2001/XMLSchema",userdata);
  userdata[0x28] = param_2;
  return userdata;
}

