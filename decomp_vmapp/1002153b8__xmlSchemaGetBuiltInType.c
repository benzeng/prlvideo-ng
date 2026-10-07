
undefined8 _xmlSchemaGetBuiltInType(undefined4 param_1)

{
  undefined8 local_18;
  
  if (DAT_1011b8798 == 0) {
    _xmlSchemaInitTypes();
  }
  switch(param_1) {
  default:
    local_18 = 0;
    break;
  case 1:
    local_18 = DAT_1011b87a8;
    break;
  case 2:
    local_18 = DAT_1011b88a8;
    break;
  case 3:
    local_18 = DAT_1011b87c0;
    break;
  case 4:
    local_18 = DAT_1011b87d8;
    break;
  case 5:
    local_18 = DAT_1011b87f0;
    break;
  case 6:
    local_18 = DAT_1011b8800;
    break;
  case 7:
    local_18 = DAT_1011b87f8;
    break;
  case 8:
    local_18 = DAT_1011b87e0;
    break;
  case 9:
    local_18 = DAT_1011b87e8;
    break;
  case 10:
    local_18 = DAT_1011b87d0;
    break;
  case 0xb:
    local_18 = DAT_1011b87c8;
    break;
  case 0xc:
    local_18 = DAT_1011b8808;
    break;
  case 0xd:
    local_18 = DAT_1011b8810;
    break;
  case 0xe:
    local_18 = DAT_1011b8820;
    break;
  case 0xf:
    local_18 = DAT_1011b8818;
    break;
  case 0x10:
    local_18 = DAT_1011b88b0;
    break;
  case 0x11:
    local_18 = DAT_1011b88b8;
    break;
  case 0x12:
    local_18 = DAT_1011b8908;
    break;
  case 0x13:
    local_18 = DAT_1011b8910;
    break;
  case 0x14:
    local_18 = DAT_1011b88c0;
    break;
  case 0x15:
    local_18 = DAT_1011b88c8;
    break;
  case 0x16:
    local_18 = DAT_1011b88d0;
    break;
  case 0x17:
    local_18 = DAT_1011b88d8;
    break;
  case 0x18:
    local_18 = DAT_1011b88e0;
    break;
  case 0x19:
    local_18 = DAT_1011b88e8;
    break;
  case 0x1a:
    local_18 = DAT_1011b88f0;
    break;
  case 0x1b:
    local_18 = DAT_1011b88f8;
    break;
  case 0x1c:
    local_18 = DAT_1011b8900;
    break;
  case 0x1d:
    local_18 = DAT_1011b8838;
    break;
  case 0x1e:
    local_18 = DAT_1011b8860;
    break;
  case 0x1f:
    local_18 = DAT_1011b8848;
    break;
  case 0x20:
    local_18 = DAT_1011b8850;
    break;
  case 0x21:
    local_18 = DAT_1011b8858;
    break;
  case 0x22:
    local_18 = DAT_1011b8840;
    break;
  case 0x23:
    local_18 = DAT_1011b8870;
    break;
  case 0x24:
    local_18 = DAT_1011b8890;
    break;
  case 0x25:
    local_18 = DAT_1011b8868;
    break;
  case 0x26:
    local_18 = DAT_1011b8888;
    break;
  case 0x27:
    local_18 = DAT_1011b8878;
    break;
  case 0x28:
    local_18 = DAT_1011b8898;
    break;
  case 0x29:
    local_18 = DAT_1011b8880;
    break;
  case 0x2a:
    local_18 = DAT_1011b88a0;
    break;
  case 0x2b:
    local_18 = DAT_1011b8828;
    break;
  case 0x2c:
    local_18 = DAT_1011b8830;
    break;
  case 0x2d:
    local_18 = DAT_1011b87b0;
    break;
  case 0x2e:
    local_18 = DAT_1011b87b8;
  }
  return local_18;
}

