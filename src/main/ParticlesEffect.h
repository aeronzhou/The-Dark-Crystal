#ifndef THE_DARK_CRYSTAL_PARTICLES_EFFECT
#define THE_DARK_CRYSTAL_PARTICLES_EFFECT


#include <Scene/Node.hpp>
#include <QString>
#include <cstdint>
#include <OgreParticleAffector.h>

/**
  * 粒子效果类，用于爆炸效果
  */
class ParticlesEffect : public dt::Node {

	Q_OBJECT

public:

	/**
      * 构造函数。 
      * @param node_name Node  对象的名字
      * @param material_handle 材质句柄
      */
	ParticlesEffect(const QString node_name, const QString &material_handle, const QString &sound_handle);

	~ParticlesEffect();

	void onInitialize();

	void onDeinitialize();

	void onUpdate(double time_diff);

private:
	QString mMaterialHandle;                        //!< 材质文件名
	QString mSoundHandle;                           //!< 爆炸声文件名
	double mRuntime;                                //!< 爆炸效果存在时间
	
};

#endif