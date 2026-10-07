
undefined8 FUN_1002ed820(undefined8 param_1,long param_2)

{
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+CMD(scid:%04x, flags:%04x, result:%04x) %s",
                  *(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),
                  *(undefined2 *)(param_2 + 0x10),"Configuration Response");
  }
  return 0;
}

