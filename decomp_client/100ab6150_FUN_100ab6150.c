
undefined8 * FUN_100ab6150(undefined8 param_1,undefined2 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  switch(*param_2) {
  case 0xc9:
    puVar2 = operator_new(0x18);
    *puVar2 = &PTR_FUN_1022822c0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    break;
  case 0xcb:
    puVar2 = operator_new(0x10);
    uVar1 = param_2[1];
    *puVar2 = &PTR_FUN_1022824a8;
    QByteArray::QByteArray((QByteArray *)(puVar2 + 1),(uint)uVar1,'\0');
    *puVar2 = &PTR_FUN_102282408;
    break;
  case 0xcc:
    puVar2 = operator_new(0x1b0);
    FUN_100ab66f0(puVar2);
    break;
  case 0xcf:
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR_FUN_102282368;
    *(undefined2 *)(puVar2 + 1) = 0;
  }
  return puVar2;
}

