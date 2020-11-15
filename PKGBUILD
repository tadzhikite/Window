# Maintainer: Zak Olson <olson.zak@gmail..com>
pkgname=window
pkgver=0.1
pkgrel=1
pkgdesc="window screen package"
arch=(x86_64)
url="https://github.com/tadzhikite/window"
license=('GPL')
depends=(glfw-x11)
makedepends=(git make glm)
source=("git://github.com/tadzhikite/window") 
md5sums=('SKIP')

package() {
	cd $srcdir/$pkgname
	make PREFIX=/usr DESTDIR="$pkgdir/" install
}
