#include <gazebo/gazebo.hh>


namespace gazebo
{
    class WorldPluginWelcome: public WorldPlugin
    {
    public:
        WorldPluginWelcome()
        {
            printf("Welcome to Roman's World!\n");
        }
        
        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {
        }
    };
    
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcome)
}
