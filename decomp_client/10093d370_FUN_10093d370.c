
void FUN_10093d370(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)_xmlMalloc)(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_10091bc84(param_2,"xmlSchemaAugmentIDC: allocating an augmented IDC definition",0);
  }
  else {
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    puVar1[1] = param_1;
    *puVar1 = 0;
    if (*(long *)(param_2 + 0xc0) == 0) {
      *(undefined8 **)(param_2 + 0xc0) = puVar1;
    }
    else {
      *puVar1 = *(undefined8 *)(param_2 + 0xc0);
      *(undefined8 **)(param_2 + 0xc0) = puVar1;
    }
  }
  return;
}

