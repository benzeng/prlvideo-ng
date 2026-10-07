
undefined8 * FUN_1005f6150(undefined4 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  if (param_2 == 0) {
    FUN_1008e3970("","vdisk",0,"Offline operation can\'t run without parent disk");
    return (undefined8 *)0x0;
  }
  switch(param_1) {
  case 1:
    puVar2 = operator_new(0x80,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1005f6050(puVar2,param_2);
      *puVar2 = &PTR_FUN_100bc74a0;
      FUN_1007d6870((long)puVar2 + 0x62);
      puVar2[0xf] = PTR_shared_null_100ba20d0;
      return puVar2;
    }
    break;
  case 2:
    puVar1 = operator_new(0xd8,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1005f9030(puVar1,param_2);
      puVar2 = puVar1;
    }
    goto LAB_1005f632f;
  case 3:
    puVar2 = operator_new(0x78,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1005f6050(puVar2,param_2);
      *puVar2 = &PTR_FUN_100bc75d8;
      FUN_1007d6870((long)puVar2 + 0x62);
      *(undefined1 *)((long)puVar2 + 0x61) = 1;
      return puVar2;
    }
    break;
  case 4:
    puVar1 = operator_new(0xf0,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1005f7b70(puVar1,param_2);
      puVar2 = puVar1;
    }
    goto LAB_1005f632f;
  case 5:
    FUN_1008e3970("","vdisk",0,"Wrong operation PROCESS_DELETE_FILES invoked");
    uVar5 = 0x2f;
    goto LAB_1005f63c3;
  case 6:
    puVar1 = operator_new(0x150,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1005f9af0(puVar1,param_2);
      puVar2 = puVar1;
    }
LAB_1005f632f:
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    break;
  case 7:
    puVar2 = operator_new(0x78,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1005f6050(puVar2,param_2);
      *puVar2 = &PTR_FUN_100bc7848;
      puVar2[0xd] = 0;
      *(undefined4 *)(puVar2 + 0xe) = 0;
      *(undefined1 *)((long)puVar2 + 0x61) = 1;
      return puVar2;
    }
    break;
  case 8:
    FUN_1008e3970("","vdisk",0,"Wrong operation PROCESS_DISK_CREATE invoked");
    uVar5 = 0x33;
LAB_1005f63c3:
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false","OfflineOperations.cpp",
                  uVar5,"Create");
    return (undefined8 *)0x0;
  default:
    pcVar3 = "Undefined offline operation %d";
    goto LAB_1005f64b8;
  case 10:
    puVar2 = operator_new(0x78,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1005f6050(puVar2,param_2);
      *puVar2 = &PTR_FUN_100bc7980;
      auVar4._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar4._0_8_ = PTR_shared_null_100ba20d0;
      auVar4._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      *(undefined1 (*) [16])(puVar2 + 0xd) = auVar4;
      *(undefined1 *)(puVar2 + 0xc) = 0;
      return puVar2;
    }
    break;
  case 0xd:
    puVar2 = operator_new(0x68,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1005f6050(puVar2,param_2);
      *puVar2 = &PTR_FUN_100bc7ab8;
      *(undefined1 *)((long)puVar2 + 0x61) = 1;
      return puVar2;
    }
    break;
  case 0xe:
    puVar2 = operator_new(0x68,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1005f6050(puVar2,param_2);
      *puVar2 = &PTR_FUN_100bc7bf0;
      return puVar2;
    }
  }
  pcVar3 = "Operation %d: No memory for object";
LAB_1005f64b8:
  FUN_1008e3970("","vdisk",0,pcVar3,param_1);
  return (undefined8 *)0x0;
}

