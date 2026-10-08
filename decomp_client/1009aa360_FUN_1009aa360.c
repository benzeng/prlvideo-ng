
char * FUN_1009aa360(char *param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  if (param_3 < 0x17) {
    if (param_3 - 6U < 2) {
      ppuVar1 = &PTR_s_Transferring_data_10227df78;
    }
    else if (param_3 == 8) {
      ppuVar1 = &PTR_s_Configuring_the_operating_system_10227df88;
    }
    else {
      if (param_3 != 0xc) goto LAB_1009aa3c3;
      ppuVar1 = &PTR_s_Copying_data_from_external_stora_10227df80;
    }
  }
  else {
    if (param_3 != 0x17) {
LAB_1009aa3c3:
      *(undefined **)param_1 = PTR_shared_null_1021e1288;
      return param_1;
    }
    ppuVar1 = &PTR_s_Removing_temporary_files_10227df90;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar1);
  return param_1;
}

