
undefined8 FUN_10005ba00(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1022699d0,&cf_tile_type);
  uVar3 = 6;
  if (lVar2 != 0) {
    *param_2 = 3;
    puVar1 = PTR_s_compare__102269a98;
    lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_compare__102269a98,&cf_file_tile);
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,puVar1,&cf_directory_tile);
      lVar5 = 1;
      if (lVar4 != 0) {
        lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,puVar1,&cf_url_tile);
        lVar5 = 2;
        if (lVar2 != 0) {
          return 9;
        }
      }
    }
    *param_2 = (&DAT_1021ed468)[lVar5 * 4];
    uVar3 = 0;
  }
  return uVar3;
}

