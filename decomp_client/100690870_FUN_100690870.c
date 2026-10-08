
undefined8 * FUN_100690870(undefined8 *param_1,int param_2)

{
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (param_2 < 0x2f) {
    switch(param_2) {
    case 0x15:
      local_78 = 0x2c;
      FUN_10012b680(param_1,&local_78);
      break;
    case 0x18:
      local_60 = 0x18;
      FUN_10012b680(param_1,&local_60);
      break;
    case 0x1b:
      local_64 = 0x19;
      FUN_10012b680(param_1,&local_64);
      break;
    case 0x1d:
      local_50 = 0xd;
      FUN_10012b680(param_1,&local_50);
      break;
    case 0x1f:
    case 0x20:
    case 0x21:
      local_4c = 7;
      FUN_10012b680(param_1,&local_4c);
      break;
    case 0x22:
    case 0x23:
switchD_1006908ab_caseD_22:
      local_58 = 0xe;
      FUN_10012b680(param_1,&local_58);
    }
  }
  else {
    switch(param_2) {
    case 0x2f:
      local_30[0] = 0;
      FUN_10012b680(param_1,local_30);
      break;
    case 0x30:
      local_48 = 4;
      FUN_10012b680(param_1,&local_48);
      break;
    case 0x31:
    case 0x35:
      local_3c = 1;
      FUN_10012b680(param_1,&local_3c);
      break;
    case 0x32:
      local_70 = 0x26;
      FUN_10012b680(param_1,&local_70);
      break;
    case 0x33:
      local_34 = 0;
      FUN_10012b680(param_1,&local_34);
      local_38 = 0x21;
      FUN_10012b680(param_1,&local_38);
      break;
    case 0x34:
      local_40 = 2;
      FUN_10012b680(param_1,&local_40);
      break;
    case 0x36:
      local_44 = 3;
      FUN_10012b680(param_1,&local_44);
      break;
    case 0x37:
      local_68 = 0x21;
      FUN_10012b680(param_1,&local_68);
      break;
    case 0x38:
      local_6c = 0x22;
      FUN_10012b680(param_1,&local_6c);
      break;
    case 0x3a:
      local_7c = 0x34;
      FUN_10012b680(param_1,&local_7c);
      break;
    case 0x3b:
      local_5c = 0x14;
      FUN_10012b680(param_1,&local_5c);
      break;
    case 0x3c:
      local_74 = 0x27;
      FUN_10012b680(param_1,&local_74);
      break;
    case 0x3e:
      goto switchD_1006908ab_caseD_22;
    case 0x53:
      local_54 = 9;
      FUN_10012b680(param_1,&local_54);
    }
  }
  return param_1;
}

