
void FUN_100609c80(long param_1)

{
  int iVar1;
  
  if ((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"RootNodeHeader {"), 1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"m_Header {");
  }
  FUN_100607900(param_1 + 0x10);
  iVar1 = 0;
  if (1 < DAT_1011b55f8) {
    iVar1 = 0;
    FUN_1008e3970("","vdisk",2,"} m_Header");
    if (DAT_1011b55f8 < 2) goto LAB_100609d86;
    iVar1 = 0;
    FUN_1008e3970("","vdisk",2,"m_FreeOffset = %u",*(undefined2 *)(param_1 + 0x110));
  }
  for (; iVar1 < 3; iVar1 = iVar1 + 1) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"Offset[%d]  = %u",iVar1,
                    *(undefined2 *)(param_1 + 0x10a + (long)iVar1 * 2));
    }
LAB_100609d86:
  }
  if ((1 < DAT_1011b55f8) &&
     (FUN_1008e3970("","vdisk",2,"m_MapSize = %u",*(undefined2 *)(param_1 + 0x112)),
     1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"m_Map {");
  }
  FUN_1007d8550(*(undefined8 *)(param_1 + 0x118),*(undefined2 *)(param_1 + 0x112));
  if (((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"} m_Map"), 1 < DAT_1011b55f8)) &&
     (FUN_1008e3970("","vdisk",2,"m_MapNodeCount = %u",*(undefined4 *)(param_1 + 0x120)),
     1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"} RootNodeHeader");
    return;
  }
  return;
}

