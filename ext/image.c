
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Vladimir Kolesnikov <vladimir@free-sevastopol.com>            |
  |          ZhuZongXin <dreamsxin@qq.com>                                 |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "Zend/zend_operators.h"
#include "Zend/zend_exceptions.h"
#include "Zend/zend_interfaces.h"

#include "kernel/main.h"
#include "kernel/memory.h"

/**
 * Phalcon\Image
 *
 * Image manipulation support. Allows images to be resized, cropped, etc.
 *
 *<code>
 *	$image = new Phalcon\Image\Adapter\GD("'upload/test.jpg'");
 *	$image->resize(200, 200);
 *	$$image->save();
 *</code>
 */


/**
 * Phalcon\Image initializer
 */
PHALCON_INIT_CLASS(Phalcon_Image){

	PHALCON_REGISTER_CLASS(Phalcon, Image, image, phalcon_image_method_entry, 0);
	
	// Resizing constraints
	zend_declare_class_constant_long(phalcon_image_ce, SL("NONE"), 1 TSRMLS_CC);
	zend_declare_class_constant_long(phalcon_image_ce, SL("WIDTH"), 2 TSRMLS_CC);
	zend_declare_class_constant_long(phalcon_image_ce, SL("HEIGHT"), 3 TSRMLS_CC);
	zend_declare_class_constant_long(phalcon_image_ce, SL("AUTO"), 4 TSRMLS_CC);
	zend_declare_class_constant_long(phalcon_image_ce, SL("INVERSE"), 5 TSRMLS_CC);
	zend_declare_class_constant_long(phalcon_image_ce, SL("PRECISE"), 6 TSRMLS_CC);

	// Flipping directions
	zend_declare_class_constant_long(phalcon_image_ce, SL("HORIZONTAL"), 11 TSRMLS_CC);
	zend_declare_class_constant_long(phalcon_image_ce, SL("VERTICAL"), 12 TSRMLS_CC);

	return SUCCESS;
}

PHP_METHOD(Phalcon_Image, resize) {
	zval *width = NULL, *height = NULL, *master = NULL;

	phalcon_fetch_params(0, 0, 3, &width, &height, &master);

	PHALCON_MM_GROW();

	PHALCON_MM_RESTORE();
}

