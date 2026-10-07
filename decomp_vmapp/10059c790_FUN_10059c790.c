
undefined8 * FUN_10059c790(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  char *pcVar2;
  
  if (0x4f < param_2) {
    switch(param_2) {
    case 0x50:
      pcVar2 = "VHD_Fixed";
      goto LAB_10059c843;
    case 0x51:
      puVar1 = (undefined *)QString::fromAscii_helper("VHD_Dynamic",0xb);
      break;
    default:
      goto switchD_10059c7b7_caseD_3;
    case 0x5a:
      puVar1 = (undefined *)QString::fromAscii_helper("VMDK_MonolithicFlat",0x13);
      break;
    case 0x5b:
      puVar1 = (undefined *)QString::fromAscii_helper("VMDK_MonolithicSparse",0x15);
      break;
    case 0x5c:
      puVar1 = (undefined *)QString::fromAscii_helper("VMDK_Extent2GBFlat",0x12);
      break;
    case 0x5d:
      puVar1 = (undefined *)QString::fromAscii_helper("VMDK_Extent2GBSparse",0x14);
    }
    goto LAB_10059c815;
  }
  switch(param_2) {
  case 1:
    puVar1 = (undefined *)QString::fromAscii_helper("Plain",5);
    break;
  case 2:
    puVar1 = (undefined *)QString::fromAscii_helper("Compressed",10);
    break;
  default:
switchD_10059c7b7_caseD_3:
    FUN_1008e3970("","vdisk",0,"Disk image type is unknown: %x",param_2);
    puVar1 = PTR_shared_null_100ba20d0;
    break;
  case 4:
    pcVar2 = "Physical";
    goto LAB_10059c856;
  case 5:
    pcVar2 = "Partition";
LAB_10059c843:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,9);
    break;
  case 6:
    pcVar2 = "Bootcamp";
LAB_10059c856:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,8);
    break;
  case 7:
    puVar1 = (undefined *)QString::fromAscii_helper("Bootcamp_UID",0xc);
  }
LAB_10059c815:
  *param_1 = puVar1;
  return param_1;
}

