
undefined8 FUN_1003a3030(long param_1,ushort param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (0xfffc < param_2) {
    if (param_2 == 0xfffd) {
      return 0;
    }
switchD_1003a3057_caseD_0:
    return 3;
  }
  switch(param_2) {
  case 0:
    break;
  case 1:
    FUN_1003a6050();
    break;
  case 2:
  case 3:
  case 5:
    FUN_1003a43b0();
    break;
  case 4:
    FUN_1003a5e00();
    break;
  case 6:
  case 7:
  case 0x24:
    FUN_1003a34f0();
    break;
  case 8:
  case 9:
  case 0x5a:
    FUN_1003a52b0();
    break;
  case 10:
  case 0xb:
  case 0x20:
  case 0x21:
    FUN_1003a4e10();
    break;
  case 0xc:
  case 0xd:
    FUN_1003a45f0();
    break;
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x22:
  case 0x23:
  case 0x4f:
  case 0x5b:
  case 0x5c:
    FUN_1003a32a0();
    break;
  default:
    goto switchD_1003a3057_caseD_0;
  case 0x12:
    FUN_1003a5ad0();
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    FUN_1003a57e0();
    break;
  case 0x19:
  case 0x1a:
  case 0x1e:
    FUN_1003a6930();
    break;
  case 0x1b:
  case 0x26:
    FUN_1003a66d0();
    break;
  case 0x1d:
  case 0x27:
  case 0x2b:
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcVar1 = "}\n";
    goto LAB_1003a30ef;
  case 0x25:
    FUN_1003a64c0();
    break;
  case 0x28:
  case 0x29:
    FUN_1003a67f0();
    break;
  case 0x2a:
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcVar1 = "}\nelse\n{\n";
LAB_1003a30ef:
    FUN_10038e8e0(uVar2,pcVar1);
    break;
  case 0x2c:
  case 0x2d:
  case 0x60:
    FUN_1003a6af0();
    break;
  case 0x58:
    FUN_1003a4a70();
    break;
  case 0x5e:
    FUN_1003a6220();
  }
  return 0;
}

